int __stdcall sub_7A9820(_DWORD *a1, unsigned __int16 a2)
{
  NiDX9Renderer *v3; // ebp
  NiProperty *NiPropertyByID; // eax
  float *v5; // edi
  unsigned __int8 i; // bl
  float v8; // [esp+1Ch] [ebp+8h]

  v3 = g_Renderer;
  dword_B42E90 = a2;
  dword_B42EB8 = (int)a1;
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)*a1, 4);
  v5 = (float *)NiPropertyByID;
  if ( NiPropertyByID )
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
      && (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 0x54))(v5) <= 0xA )
    {
      v8 = v5[0x25];
      if ( (a2 < 6u || a2 > 9u) && a2 != 0x154 && a2 != 0x155 )
        sub_7ECB20();
      for ( i = 0; i < *((_BYTE *)a1 + 8); ++i )
        sub_7EE390(i, *(_DWORD *)(a1[3] + 4 * i), v8);
    }
  }
  return (*(int (__thiscall **)(_DWORD, NiDX9Renderer *))(*(_DWORD *)*a1 + 0x84))(*a1, v3);
}
