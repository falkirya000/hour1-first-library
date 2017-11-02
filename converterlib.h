float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
//m to ft

float m_to_ft(void)
{
    float meters = get_float("Meters: ");
    float ft = meters*3.28084;
    printf("\n%.2f\n", ft);
    return ft;
}
