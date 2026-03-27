double __usercall sub_601670@<st0>(PlayerCharacter *this@<ecx>, double a2@<st0>)
{
  unsigned int v3; // ebp
  ActorVtbl *v4; // ebx
  Actor *v5; // eax
  Actor *v6; // esi
  ActorVtbl *vtbl; // edi
  char v8; // al
  ActorVtbl **v9; // eax
  double result; // st7
  char v11; // al
  int *v12; // esi
  unsigned int v13; // esi
  TESObjectREFR *v14; // [esp+0h] [ebp-24h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  ActorVtbl *v18; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v19; // [esp+20h] [ebp-4h]

  v3 = 0;
  v4 = 0;
  v18 = 0;
  v19 = 0;
  v5 = sub_673A50(&ActorProcessManager_ptr, 0);
  v6 = sub_7616D0((ActorList *)v5);
  if ( v6 )
  {
    do
    {
      if ( !*(_DWORD *)&v6->members.super.super.super.type && !v6->vtbl )
        break;
      vtbl = v6->vtbl;
      a2 = sub_5F7A80(this, a2, (float *)v6->vtbl, 1);
      if ( v8 )
      {
        if ( vtbl )
        {
          if ( v4 )
          {
            v9 = (ActorVtbl **)FormHeapAlloc(8u);
            if ( v9 )
            {
              *v9 = v4;
              v9[1] = 0;
            }
            else
            {
              v9 = 0;
            }
            v9[1] = (ActorVtbl *)v3;
            v3 = (unsigned int)v9;
          }
          v4 = vtbl;
        }
      }
      v6 = *(Actor **)&v6->members.super.super.super.type;
    }
    while ( v6 );
    v19 = v3;
    v18 = v4;
  }
  result = sub_5F7A80(this, a2, (float *)TESDataHandler_g_PlayerRef, 1);
  if ( v11 )
  {
    BSSimpleList_PushFront(&v18, (int)TESDataHandler_g_PlayerRef);
    v3 = v19;
  }
  v16 = 0.0;
  v12 = (int *)&v18;
  do
  {
    if ( !v12[1] && !*v12 )
      break;
    v17 = sub_5E68A0(this, *v12, *(float *)v12, v14);
    if ( v16 < (double)v17 )
      v16 = v17;
    v12 = (int *)v12[1];
  }
  while ( v12 );
  if ( v3 )
  {
    do
    {
      v13 = *(_DWORD *)(v3 + 4);
      FormHeapFree(v3);
      v3 = v13;
    }
    while ( v13 );
  }
  return result;
}
