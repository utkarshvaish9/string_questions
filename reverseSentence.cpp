void reverse(char* sentence)
{
    int index = strlen(sentence) - 1,hold,last = '\0';
    /*For the 1st iteration last is `\0` for all others it is ` `*/
    while (index >= 0)
    {
        /*
        In your original code,
        This while loop(below) will continue to keep decrementing index 
        even below `0`,You wont exit this while loop until you encounter a ` `.
        For the 1st word of the sentence you will never come out of the loop.
        Hence the check, index>=0
        */

        while (index>=0 && sentence[index] != ' ')
        index--;

    /* You can print the whitespace later*/

    hold = index - 1;  // This keeps track of the last character 
                       // of preceding word 

    index++; //character after space

        while (sentence[index] != last)
    {
            cout << sentence[index]; 
            index++;
        }
    last = ' '; 
        index = hold; 

        /* Dont print space after 1st word*/
    if(index > 0)
    cout<<" ";
    }

}
int main()
{
    char* sentence = new char[256];
    cin.getline(sentence, 256);
    reverse(sentence);
    delete[] sentence; // Delete the allocated memory
}
