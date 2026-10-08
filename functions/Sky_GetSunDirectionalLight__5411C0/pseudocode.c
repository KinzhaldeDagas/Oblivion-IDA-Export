NiDirectionalLight *__thiscall Sky::GetSunDirectionalLight(Sky *this)
{
  Sun *sun; // eax

  sun = this->sun; /*0x5411c0*/
  if ( sun ) /*0x5411c5*/
    return sun->membr.SunDirLight; /*0x5411c7*/
  else
    return 0; /*0x5411cb*/
}
