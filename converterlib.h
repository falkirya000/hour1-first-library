float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float mtoft(void)
{
    printf("Number of meters?\n");
    float m = get_float;
    float ft = m*3.28084;
    printf("The number of feet it %.2f\n",ft);
    return ft;
}
