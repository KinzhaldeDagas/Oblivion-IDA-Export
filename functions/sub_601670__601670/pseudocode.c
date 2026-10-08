double __usercall sub_601670@<st0>(PlayerCharacter *this@<ecx>, double a2@<st0>)
{
  unsigned int v2; // ebp
  ActorVtbl *v3; // ebx
  Actor *ListHead; // eax
  Actor *v5; // esi
  ActorVtbl *vtbl; // edi
  char v7; // al
  ActorVtbl **v8; // eax
  double result; // st7
  char v10; // al
  int *v11; // esi
  unsigned int v12; // esi
  TESObjectREFR *v13; // [esp+0h] [ebp-24h]
  float v15; // [esp+14h] [ebp-10h]
  float v16; // [esp+18h] [ebp-Ch]
  ActorVtbl *v17; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v18; // [esp+20h] [ebp-4h]

  v2 = 0; /*0x601677*/
  v3 = 0; /*0x60167d*/
  v17 = 0; /*0x601685*/
  v18 = 0; /*0x601689*/
  ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x60168d*/
  v5 = ActorList_ReturnHead((ActorList *)ListHead); /*0x601699*/
  if ( v5 ) /*0x60169d*/
  {
    do /*0x6016ec*/
    {
      if ( !*(_DWORD *)&v5->members.super.super.super.type && !v5->vtbl ) /*0x6016a6*/
        break; /*0x6016a9*/
      vtbl = v5->vtbl; /*0x6016ab*/
      a2 = sub_5F7A80(this, a2, (float *)v5->vtbl, 1); /*0x6016b4*/
      if ( v7 ) /*0x6016bb*/
      {
        if ( vtbl ) /*0x6016bf*/
        {
          if ( v3 ) /*0x6016c3*/
          {
            v8 = (ActorVtbl **)FormHeapAlloc(8u); /*0x6016c7*/
            if ( v8 ) /*0x6016d1*/
            {
              *v8 = v3; /*0x6016d3*/
              v8[1] = 0; /*0x6016d5*/
            }
            else
            {
              v8 = 0; /*0x6016de*/
            }
            v8[1] = (ActorVtbl *)v2; /*0x6016e0*/
            v2 = (unsigned int)v8; /*0x6016e3*/
          }
          v3 = vtbl; /*0x6016e5*/
        }
      }
      v5 = *(Actor **)&v5->members.super.super.super.type; /*0x6016e7*/
    }
    while ( v5 ); /*0x6016ec*/
    v18 = v2; /*0x6016ee*/
    v17 = v3; /*0x6016f2*/
  }
  result = sub_5F7A80(this, a2, (float *)reference, 1); /*0x601702*/
  if ( v10 ) /*0x601709*/
  {
    BSSimpleList_PushFront(&v17, (int)reference); /*0x601716*/
    v2 = v18; /*0x60171b*/
  }
  v15 = 0.0; /*0x601723*/
  v11 = (int *)&v17; /*0x601727*/
  do /*0x60176b*/
  {
    if ( !v11[1] && !*v11 ) /*0x601736*/
      break; /*0x601739*/
    v16 = sub_5E68A0(this, *v11, *(float *)v11, v13); /*0x601747*/
    if ( v15 < (double)v16 ) /*0x60175a*/
      v15 = v16; /*0x60175c*/
    v11 = (int *)v11[1]; /*0x601766*/
  }
  while ( v11 ); /*0x60176b*/
  if ( v2 ) /*0x60176f*/
  {
    do /*0x601781*/
    {
      v12 = *(_DWORD *)(v2 + 4); /*0x601771*/
      FormHeapFree(v2); /*0x601775*/
      v2 = v12; /*0x60177f*/
    }
    while ( v12 ); /*0x601781*/
  }
  return result; /*0x601783*/
}
