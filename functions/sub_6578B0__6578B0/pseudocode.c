int __thiscall sub_6578B0(char *this, Actor *a2)
{
  Actor *v2; // ebp
  TESObjectREFR **v4; // edi
  char *v5; // eax
  int v6; // ecx
  TESObjectREFR *v7; // ecx
  TESForm *Owner; // eax
  int *v9; // ecx
  int v10; // ebp
  int v11; // eax
  int v12; // edx
  char *v13; // eax
  int v14; // ecx

  v2 = a2; /*0x6578b1*/
  if ( Actor::HasNPCBaseForm(a2) /*0x6578e3*/
    && !(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this)
    && !*((_DWORD *)this + 0x48)
    && !*((_DWORD *)this + 0x2D)
    && !*((_DWORD *)this + 0x2C) )
  {
    sub_6553E0(this, (TESObjectREFR *)a2, 0.0); /*0x6578ef*/
  }
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) != 9 && Actor::HasNPCBaseForm(a2) ) /*0x65790b*/
  {
    if ( !*((_DWORD *)this + 0x48) ) /*0x657918*/
    {
      v4 = (TESObjectREFR **)(this + 0xB0); /*0x657922*/
      v5 = this + 0xB0; /*0x657928*/
      v6 = 0; /*0x65792a*/
      if ( this != (char *)0xFFFFFF50 ) /*0x65792e*/
      {
        do /*0x65793d*/
        {
          if ( *(_DWORD *)v5 ) /*0x657930*/
            ++v6; /*0x657935*/
          v5 = *((char **)v5 + 1); /*0x657938*/
        }
        while ( v5 ); /*0x65793d*/
        if ( v6 ) /*0x657941*/
        {
          v7 = *v4; /*0x657943*/
          *((_DWORD *)this + 0x48) = *v4; /*0x657945*/
          Owner = TESObjectREFR_GetOwner(v7); /*0x65794b*/
          v9 = (int *)(this + 0xB0); /*0x657952*/
          if ( Owner ) /*0x657954*/
          {
            BSSimpleList_Remove(v9, *((_DWORD *)this + 0x48)); /*0x65795d*/
          }
          else
          {
            v10 = BSSimpleList_Count(v9); /*0x65796b*/
            v11 = Game_RandomLargeInteger(0); /*0x65796d*/
            v12 = v11 % v10; /*0x657973*/
            if ( v11 % v10 >= v10 ) /*0x65797a*/
              v12 = v10; /*0x65797c*/
            v13 = this + 0xB0; /*0x657980*/
            if ( v12 > 0 ) /*0x657982*/
            {
              do /*0x65798a*/
              {
                --v12; /*0x657984*/
                v13 = *((char **)v13 + 1); /*0x657987*/
              }
              while ( v12 ); /*0x65798a*/
            }
            v2 = a2; /*0x65798e*/
            *((_DWORD *)this + 0x48) = *(_DWORD *)v13; /*0x657992*/
          }
        }
      }
    }
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 0xD0))(this, *((_DWORD *)this + 0x48)); /*0x6579a9*/
    if ( *((_DWORD *)this + 0x48) ) /*0x6579ab*/
      (*(void (__thiscall **)(char *, Actor *, _DWORD))(*(_DWORD *)this + 0x51C))(this, v2, 0); /*0x6579c1*/
    v14 = *((_DWORD *)this + 0xD); /*0x6579c3*/
    if ( v14 ) /*0x6579c8*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x2C))(v14) ) /*0x6579cf*/
      {
        *((_DWORD *)this + 0x48) = 0; /*0x6579e3*/
        sub_6FAEE0((Unk128 *)(this + 0x128), 0.0); /*0x6579ed*/
        *(this + 0x136) = 0; /*0x6579f2*/
        *((_DWORD *)this + 0x4A) = LODWORD(g_zeroNiPoint3.x); /*0x6579fe*/
        *((_DWORD *)this + 0x4B) = LODWORD(g_zeroNiPoint3.y); /*0x657a06*/
        *((_DWORD *)this + 0x4C) = LODWORD(g_zeroNiPoint3.z); /*0x657a0f*/
      }
    }
  }
  if ( Actor::HasNPCBaseForm(v2) && (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 9 /*0x657a41*/
    || !*((_DWORD *)this + 0x48) && !*((_DWORD *)this + 0x2D) && !*((_DWORD *)this + 0x2C) )
  {
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 0xBC))(this, 1); /*0x657a56*/
    BSSimpleList_Clear((_DWORD *)this + 0x2C); /*0x657a5e*/
  }
  return (*(int (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x48))(this, v2); /*0x657a6d*/
}
