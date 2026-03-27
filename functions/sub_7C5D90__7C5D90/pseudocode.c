unsigned int __thiscall sub_7C5D90(_DWORD *this, int a2)
{
  unsigned int result; // eax
  unsigned int i; // ebx
  NiNode *v4; // edi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v6; // esi
  BOOL v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // ecx
  int v10; // eax

  result = *(unsigned __int16 *)(a2 + 0xB6);
  for ( i = 0; result > i; ++i )
  {
    v4 = *(NiNode **)(*(_DWORD *)(a2 + 0xB0) + 4 * i);
    if ( v4 )
    {
      if ( v4->vtbl->super.super.Unk_04((NiObject *)v4) )
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(v4, 4);
        v6 = NiPropertyByID;
        v7 = NiPropertyByID
          && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
          && (*((int (__thiscall **)(NiProperty *))v6->vtbl + 0x15))(v6) <= 0xA;
        if ( (v7 ? (unsigned int)v6 : 0) != 0 )
        {
          v8 = (_DWORD *)*(this + 0x3A);
          while ( v8 )
          {
            v9 = (_DWORD *)v8[2];
            v8 = (_DWORD *)*v8;
            if ( v9 )
              sub_7D6940(v9, (int)v4);
          }
        }
      }
      else
      {
        v10 = (int)v4->vtbl->super.super.Unk_02((NiObject *)v4);
        if ( v10 )
          sub_7C5D90(this, v10);
      }
    }
    result = *(unsigned __int16 *)(a2 + 0xB6);
  }
  return result;
}
