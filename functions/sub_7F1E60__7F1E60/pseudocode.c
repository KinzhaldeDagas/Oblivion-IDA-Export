SpeedTreeLeafShaderProperty *__thiscall sub_7F1E60(char **this, int a2)
{
  SpeedTreeLeafShaderProperty *v3; // edi
  __int16 v4; // ax
  SpeedTreeLeafShaderProperty *v5; // edi
  int v7; // [esp-8h] [ebp-24h]
  int v8; // [esp-4h] [ebp-20h]

  v3 = (SpeedTreeLeafShaderProperty *)FormHeapAlloc(0xB0u);
  if ( v3 )
  {
    v8 = (*((int (__thiscall **)(char **))*this + 0x27))(this);
    v7 = (*((int (__thiscall **)(char **))*this + 0x1A))(this);
    v4 = (*((int (__thiscall **)(char **))*this + 0x26))(this);
    v5 = SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(v3, v4, v7, v8);
  }
  else
  {
    v5 = 0;
  }
  sub_7F1C30(this, (int)v5, a2);
  return v5;
}
