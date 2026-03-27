NiDirectionalLight *__thiscall Sky::GetSunDirectionalLight(Sky *this)
{
  Sun *sun; // eax

  sun = this->sun;
  if ( sun )
    return sun->membr.SunDirLight;
  else
    return 0;
}
