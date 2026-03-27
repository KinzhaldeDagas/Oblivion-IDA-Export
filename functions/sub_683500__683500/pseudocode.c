int __thiscall sub_683500(NiTMap_TESCELL *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // edx
  NiTMap_Entry_TESCELL *v5; // eax
  TESObjectCELL *v6; // esi
  int v7; // ecx
  void (__thiscall ***flags)(_DWORD, int); // ecx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // edx
  NiTMap_Entry_TESCELL *v12; // eax
  TESObjectCELL *v13; // esi
  int v14; // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  _DWORD *v18; // edx
  NiTMap_Entry_TESCELL *v19; // eax
  TESObjectCELL *v20; // esi
  int v21; // ecx
  void (__thiscall ***v22)(_DWORD, int); // ecx
  NiTMap_Entry_TESCELL *v24; // [esp+18h] [ebp-Ch] BYREF
  TESObjectCELL *v25; // [esp+1Ch] [ebp-8h] BYREF
  void *v26; // [esp+20h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 0x10) )
  {
    sub_683490((LONG *)this);
    *((_DWORD *)this + 0x10) = 0;
  }
  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    v4 = *((_DWORD **)this + 0xA);
    while ( !*v4 )
    {
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_7;
    }
    v5 = *(NiTMap_Entry_TESCELL **)(*((_DWORD *)this + 0xA) + 4 * v3);
  }
  else
  {
LABEL_7:
    v5 = 0;
  }
  v24 = v5;
  while ( v24 )
  {
    v25 = 0;
    sub_452600(this + 2, &v24, &v26, &v25);
    v6 = v25;
    if ( v25 )
    {
      v7 = *(_DWORD *)&v25->members.super.type;
      if ( v7 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x10))(v7, 1);
      flags = (void (__thiscall ***)(_DWORD, int))v6->members.super.flags;
      if ( flags )
        (**flags)(flags, 1);
      FormHeapFree((unsigned int)v6);
    }
  }
  NiTMap_Clear((_DWORD *)this + 8);
  v9 = *((_DWORD *)this + 5);
  v10 = 0;
  if ( v9 )
  {
    v11 = *((_DWORD **)this + 6);
    while ( !*v11 )
    {
      ++v10;
      ++v11;
      if ( v10 >= v9 )
        goto LABEL_20;
    }
    v12 = *(NiTMap_Entry_TESCELL **)(*((_DWORD *)this + 6) + 4 * v10);
  }
  else
  {
LABEL_20:
    v12 = 0;
  }
  v24 = v12;
  while ( v24 )
  {
    v25 = 0;
    sub_452600(this + 1, &v24, &v26, &v25);
    v13 = v25;
    if ( v25 )
    {
      v14 = *(_DWORD *)&v25->members.super.type;
      if ( v14 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x10))(v14, 1);
      v15 = (void (__thiscall ***)(_DWORD, int))v13->members.super.flags;
      if ( v15 )
        (**v15)(v15, 1);
      FormHeapFree((unsigned int)v13);
    }
  }
  NiTMap_Clear((_DWORD *)this + 4);
  v16 = *((_DWORD *)this + 0xD);
  v17 = 0;
  if ( v16 )
  {
    v18 = *((_DWORD **)this + 0xE);
    while ( !*v18 )
    {
      ++v17;
      ++v18;
      if ( v17 >= v16 )
        goto LABEL_33;
    }
    v19 = *(NiTMap_Entry_TESCELL **)(*((_DWORD *)this + 0xE) + 4 * v17);
  }
  else
  {
LABEL_33:
    v19 = 0;
  }
  v24 = v19;
  while ( v24 )
  {
    v25 = 0;
    sub_452600(this + 3, &v24, &v26, &v25);
    v20 = v25;
    if ( v25 )
    {
      v21 = *(_DWORD *)&v25->members.super.type;
      if ( v21 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v21 + 0x10))(v21, 1);
      v22 = (void (__thiscall ***)(_DWORD, int))v20->members.super.flags;
      if ( v22 )
        (**v22)(v22, 1);
      FormHeapFree((unsigned int)v20);
    }
  }
  return NiTMap_Clear((_DWORD *)this + 0xC);
}
