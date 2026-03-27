int __thiscall sub_6578B0(char *this, TESObjectREFR *a2)
{
  TESObjectREFR *v2; // ebp
  TESObjectREFR **v4; // edi
  char *v5; // eax
  int v6; // ecx
  TESObjectREFR *v7; // ecx
  BSExtraDataVtbl *Owner; // eax
  char *v9; // ecx
  int v10; // ebp
  int RandomLargeInteger; // eax
  int v12; // edx
  char *v13; // eax
  int v14; // ecx

  v2 = a2;
  if ( sub_5E32D0(a2)
    && !(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this)
    && !*((_DWORD *)this + 0x48)
    && !*((_DWORD *)this + 0x2D)
    && !*((_DWORD *)this + 0x2C) )
  {
    sub_6553E0(this, a2, 0.0);
  }
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) != 9 && sub_5E32D0(a2) )
  {
    if ( !*((_DWORD *)this + 0x48) )
    {
      v4 = (TESObjectREFR **)(this + 0xB0);
      v5 = this + 0xB0;
      v6 = 0;
      if ( this != (char *)0xFFFFFF50 )
      {
        do
        {
          if ( *(_DWORD *)v5 )
            ++v6;
          v5 = *((char **)v5 + 1);
        }
        while ( v5 );
        if ( v6 )
        {
          v7 = *v4;
          *((_DWORD *)this + 0x48) = *v4;
          Owner = TESObjectREFR_GetOwner(v7);
          v9 = this + 0xB0;
          if ( Owner )
          {
            BSSimpleList_Remove(v9, *((_DWORD *)this + 0x48));
          }
          else
          {
            v10 = BSSimpleList_Count(v9);
            RandomLargeInteger = GetRandomLargeInteger_(0);
            v12 = RandomLargeInteger % v10;
            if ( RandomLargeInteger % v10 >= v10 )
              v12 = v10;
            v13 = this + 0xB0;
            if ( v12 > 0 )
            {
              do
              {
                --v12;
                v13 = *((char **)v13 + 1);
              }
              while ( v12 );
            }
            v2 = a2;
            *((_DWORD *)this + 0x48) = *(_DWORD *)v13;
          }
        }
      }
    }
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 0xD0))(this, *((_DWORD *)this + 0x48));
    if ( *((_DWORD *)this + 0x48) )
      (*(void (__thiscall **)(char *, TESObjectREFR *, _DWORD))(*(_DWORD *)this + 0x51C))(this, v2, 0);
    v14 = *((_DWORD *)this + 0xD);
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x2C))(v14) )
      {
        *((_DWORD *)this + 0x48) = 0;
        sub_6FAEE0((Unk128 *)(this + 0x128), 0.0);
        *(this + 0x136) = 0;
        *((float *)this + 0x4A) = Vector3_InitValue_;
        *((float *)this + 0x4B) = *(&Vector3_InitValue_ + 1);
        *((float *)this + 0x4C) = dword_B3F9B0;
      }
    }
  }
  if ( sub_5E32D0(v2) && (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 9
    || !*((_DWORD *)this + 0x48) && !*((_DWORD *)this + 0x2D) && !*((_DWORD *)this + 0x2C) )
  {
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 0xBC))(this, 1);
    BSSimpleList_Clear((_DWORD *)this + 0x2C);
  }
  return (*(int (__thiscall **)(char *, TESObjectREFR *))(*(_DWORD *)this + 0x48))(this, v2);
}
