SpeedTreeLeafShaderProperty *__thiscall sub_7F1CE0(_DWORD *this)
{
  SpeedTreeLeafShaderProperty *v2; // edi
  __int16 v3; // ax
  SpeedTreeLeafShaderProperty *v4; // edi
  int v6; // [esp-8h] [ebp-24h]
  int v7; // [esp-4h] [ebp-20h]

  v2 = (SpeedTreeLeafShaderProperty *)FormHeapAlloc(0xB0u);
  if ( v2 )
  {
    v7 = (*(int (__thiscall **)(_DWORD *))(*this + 0x9C))(this);
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 0x68))(this);
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 0x98))(this);
    v4 = SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(v2, v3, v6, v7);
  }
  else
  {
    v4 = 0;
  }
  (*(void (__thiscall **)(SpeedTreeLeafShaderProperty *, _DWORD))(*(_DWORD *)v4 + 0x7C))(v4, *(this + 0x27));
  return v4;
}
