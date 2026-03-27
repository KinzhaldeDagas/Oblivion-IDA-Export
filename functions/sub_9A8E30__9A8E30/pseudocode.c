BOOL __thiscall sub_9A8E30(
        unsigned __int16 *this,
        int a2,
        NiObjectNET *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  unsigned int v14; // eax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // ecx
  unsigned int i; // [esp+2Ch] [ebp-8h]
  NiExtraData *ExtraData; // [esp+30h] [ebp-4h]
  char v23; // [esp+38h] [ebp+4h]
  int v24; // [esp+5Ch] [ebp+28h]

  *((_DWORD *)this + 8) = a2;
  v23 = 1;
  ExtraData = NiObjectNET_GetExtraData(a3, off_B29F84);
  v14 = 0;
  for ( i = 0; i < *(this + 0xB); v14 = ++i )
  {
    v16 = *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v14);
    if ( !v16 )
      continue;
    if ( !*(_BYTE *)(v16 + 8) )
      return v23 == 0;
    v24 = *(_DWORD *)(v16 + 0x1C);
    if ( v24 == 0xFFFFFFFF && !*(_DWORD *)(v16 + 0x24) )
      continue;
    v17 = *(_DWORD *)(v16 + 0x14) & 0xF0000000;
    switch ( v17 )
    {
      case 0x20000000u:
        v18 = (*(int (__thiscall **)(unsigned __int16 *, int, int, NiObjectNET *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 0x54))(
                this,
                a2,
                v16,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11);
        break;
      case 0x10000000u:
        v19 = *(_DWORD *)(v16 + 0x18);
        if ( v19 == 1 )
        {
          v18 = (*(int (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(**((_DWORD **)this + 0xA) + 0x178))(
                  *((_DWORD *)this + 0xA),
                  v24,
                  *(_DWORD *)(v16 + 0x30),
                  *(_DWORD *)(v16 + 0x20)) < 0;
        }
        else if ( v19 == 2 )
        {
          v18 = (*(int (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(**((_DWORD **)this + 0xA) + 0x1B4))(
                  *((_DWORD *)this + 0xA),
                  v24,
                  *(_DWORD *)(v16 + 0x30),
                  *(_DWORD *)(v16 + 0x20)) < 0;
        }
        else
        {
          v18 = (*(int (__thiscall **)(unsigned __int16 *, int, int, int))(*(_DWORD *)this + 0x58))(this, a2, v16, a11);
        }
        break;
      case 0x30000000u:
        v18 = (*(int (__thiscall **)(unsigned __int16 *, int, int, NiObjectNET *, int, int, int, int, int, int, int, int, int, NiExtraData *))(*(_DWORD *)this + 0x5C))(
                this,
                a2,
                v16,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11,
                a12,
                ExtraData);
        break;
      case 0x40000000u:
        v18 = (*(int (__thiscall **)(unsigned __int16 *, int, int, int))(*(_DWORD *)this + 0x60))(this, a2, v16, a11);
        break;
      case 0x50000000u:
        v18 = (*(int (__thiscall **)(unsigned __int16 *, int, int, NiObjectNET *, int, int, int, int, int, int))(*(_DWORD *)this + 0x64))(
                this,
                a2,
                v16,
                a3,
                a4,
                a7,
                a8,
                a9,
                a10,
                a11);
        break;
      case 0x60000000u:
        v18 = (*(int (__thiscall **)(unsigned __int16 *, int, int, NiObjectNET *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 0x6C))(
                this,
                a2,
                v16,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11);
        break;
      default:
        goto LABEL_23;
    }
    if ( v18 )
LABEL_23:
      v23 = 0;
  }
  return v23 == 0;
}
