/** \brief muestra el menu de opciones
 *
 * \param  float numeroUno (es el valor del primer operando).
 * \param  float numeroDos (es el valor del primer operando).
 * \param  char mensaje (el mensaje de error).
 * \param  int primOpcion (es el limite menor a validar).
 * \param  int ultOpcion (es el limite mayor a validar).
 * \return int opcion (opcion que se selecciono del menu).
 *
 */
int menu(float, float, char[], int, int);


 /** \brief se le pide un numero al usuario y se valida
 *
 * \param numero se carga el numero ingresado
 *
 */
void getFloat(float*);


/** \brief Calcula la suma de numeroUno y numeroDos.
 *
 * \param float numeroUno.
 * \param float numeroDos.
 * \return float suma (resultado de la suma).
 *
 */
float operacionSuma (float, float);


/** \brief Calcula la resta de numeroUno y numeroDos.
 *
 * \param float numeroUno.
 * \param float numeroDos.
 * \return float resta (resultado de la resta).
 *
 */
float operacionResta (float, float);


/** \brief Calcula la division de numeroUno y numeroDos.
 *
 * \param float numeroUno.
 * \param float numeroDos.
 * \return float division (resultado de la division).
 *
 */
float operacionDivision (float, float);


/** \brief Toma un numero y muestra el resultado de la funcion division.
 *
 * \param numeroUno toma el primer numero.
 *
 */
int mostrarDivision(float, float);


/** \brief Calcula la multiplicacion de numeroUno y numeroDos.
 *
 * \param float numeroUno.
 * \param float numeroDos.
 * \return float multiplicacion (resultado de la multiplicacion).
 *
 */
float operacionMultiplicacion (float, float);


/** \brief Calcula el factorial de numeroUno y numeroDos.
 *
 * \param float numeroUno.
 * \param float numeroDos.
 * \return int factorial (resultado factorial).
 *
 */
float operacionFact (float);


/** \brief Toma un numero y muestra el resultado de la funcion factorial.
 *
 * \param float numeroUno .
 *
 */
int mostrarFac(float);

