class Calculos{
	private:
		int userInput;
	public:
		Calculos(){
			userInput=0;
		}
	
	//set and get
	void set_userInput(int _input);
	int get_userInput();
	
	//actions or atributes
	void tabla_multiplicar();
	bool numero_perfecto();
	void suma_pares_impares();
};