/*
Name: Mary-Rose Tracy 
ID#:1001852753 
Assignment: P06 Email
TODO: see program comments below
Computer.java
Credit to Prof Rice to get the baseline going
*/
package store;

import java.util.ArrayList;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
//NEW IMPORTS:
import javax.swing.JFileChooser;
import javax.swing.filechooser.FileFilter;
import javax.swing.filechooser.FileNameExtensionFilter;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.FileWriter;
import java.io.BufferedWriter;
public class Computer {
    public Computer(String name, String model) {
        this.name = name;
        this.model = model;
        ///NEWWWW
        //this.options = new ArrayList<>();
    }
    //NEWWWWW
     public Computer(BufferedReader br)throws IOException
     {
        this.name=br.readLine();
        this.model=br.readLine();
        int OS=Integer.parseInt(br.readLine());
        this.options=new ArrayList<>();// maybe no this.
        for(int i=0;i<OS;i++) 
        {
            this.options.add(new Option(br));
        }
    }

    public void save(BufferedWriter bw)throws IOException 
    {
        bw.write(name+"\n");
        bw.write(model+"\n");
        bw.write(options.size()+"\n");
        for(Option option:options) 
        {
            option.save(bw);
        }
    }
    //NEWWWW^^^^^^
    public void addOption(Option option) {
        options.add(option);
    }
    public long cost() {
        long cost = 0;
        for(Option o : options) cost += o.cost();
        return cost;
    }
    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder(name + " (" + model + "}");
        for(Option o : options) sb.append("\n  " + o);
        return sb.toString();
    }
    
    // WARNING: The equals method relies on a stable toString method
    //   that includes ALL significant fields to be compared
    // This includes the order in which Option objects were added
    // A better implementation would sort field options,
    //   which would require that Option implement Comparable
    // We'll leave that as a challenge for the enthusiastic student
    @Override
    public boolean equals(Object o) {
        try {
            if(this == o) return true;
            if(this.getClass() != o.getClass()) return false;
            Computer c = (Computer) o;
            return this.toString().equals(c.toString());
        } catch (Exception e) {
            return false;
        }
    }
    
    private String name;
    private String model;
    private ArrayList<Option> options = new ArrayList<>();
}
