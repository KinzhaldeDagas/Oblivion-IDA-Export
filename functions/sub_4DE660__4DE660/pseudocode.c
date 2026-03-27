signed int __thiscall sub_4DE660(char *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  NiObject *v5; // eax
  NiObject *v6; // eax
  NiObject *v7; // esi
  char v8; // al
  int v9; // edi
  char v10; // al
  int v11; // eax
  int v13; // [esp+8h] [ebp-4h] BYREF

  if ( !(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this)
    || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) != 0x18 )
  {
    return 0;
  }
  v2 = sub_41F830((ExtraDataList *)(this + 0x44), 4) ? 1 : 3;
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x154))(this)
    && (v3 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x154))(this), *(_WORD *)(v3 + 0xB6)) )
  {
    v4 = **(_DWORD **)(v3 + 0xB0);
  }
  else
  {
    v4 = 0;
  }
  if ( v4 )
    v5 = *(NiObject **)(v4 + 0xC);
  else
    v5 = 0;
  v6 = NiRTTI_Cast(&stru_B3CAC0, v5);
  if ( !v6 )
    return v2;
  v7 = v6 + 0xB;
  v8 = NiTMap_GetAt(&v6[0xB].__vftable, (int)"Open", &v13);
  v9 = v8 != 0 ? v13 : 0;
  v10 = NiTMap_GetAt(v7, (int)"Close", &v13);
  v11 = v10 != 0 ? v13 : 0;
  if ( !v9 || !v11 )
    return v2;
  if ( *(_DWORD *)(v9 + 0x44) == 1 )
    return 2;
  if ( *(_DWORD *)(v11 + 0x44) == 1 )
    return 4;
  else
    return v2;
}
