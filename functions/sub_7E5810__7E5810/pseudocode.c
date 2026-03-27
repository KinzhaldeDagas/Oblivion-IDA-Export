ParticleShaderProperty *__thiscall sub_7E5810(char **this, int a2)
{
  ParticleShaderProperty *v3; // eax
  ParticleShaderProperty *v4; // esi

  v3 = (ParticleShaderProperty *)FormHeapAlloc(0x128u);
  v4 = 0;
  if ( v3 )
    v4 = ParticleShaderProperty::ParticleShaderProperty(v3);
  sub_7E2490(this, (int)v4, a2);
  return v4;
}
