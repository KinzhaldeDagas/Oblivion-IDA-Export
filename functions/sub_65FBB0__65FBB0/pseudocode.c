// Consumes and frees the oldest (tail) attribute-bonus bucket after a player level-up, then ensures a current bucket remains available. New buckets are pushed at the front, so pending levels are resolved FIFO.
void __thiscall Player_ConsumeOldestAttributeBonusBucket(PlayerCharacter *this)
{
  unsigned int *attributeBonuses; // ecx
  int v3; // edx
  unsigned int *v4; // eax
  UInt8 **v5; // eax
  UInt8 **v6; // ecx
  int *v7; // edx
  int *i; // eax
  unsigned int v9; // esi
  int v10; // eax
  UInt8 **v11; // eax
  _DWORD *v12; // eax

  attributeBonuses = (unsigned int *)this->attributeBonuses; /*0x65fbb4*/
  if ( attributeBonuses ) /*0x65fbbc*/
  {
    v3 = 0; /*0x65fbbe*/
    v4 = attributeBonuses; /*0x65fbc0*/
    do /*0x65fbcf*/
    {
      if ( *v4 ) /*0x65fbc2*/
        ++v3; /*0x65fbc7*/
      v4 = (unsigned int *)v4[1]; /*0x65fbca*/
    }
    while ( v4 ); /*0x65fbcf*/
    if ( v3 == 1 ) /*0x65fbd4*/
    {
      FormHeapFree(*attributeBonuses); /*0x65fbd9*/
      v5 = this->attributeBonuses; /*0x65fbde*/
      v6 = (UInt8 **)v5[1]; /*0x65fbe4*/
      if ( v6 ) /*0x65fbec*/
      {
        v5[1] = v6[1]; /*0x65fbf1*/
        *v5 = *v6; /*0x65fbf7*/
        FormHeapFree((unsigned int)v6); /*0x65fbf9*/
      }
      else
      {
        *v5 = 0; /*0x65fc03*/
      }
    }
    else
    {
      v7 = (int *)attributeBonuses; /*0x65fc0b*/
      for ( i = (int *)attributeBonuses[1]; i; i = (int *)i[1] ) /*0x65fc12*/
        v7 = i; /*0x65fc14*/
      v9 = *v7; /*0x65fc1d*/
      if ( *v7 ) /*0x65fc1d*/
      {
        BSSimpleList_Remove((int *)attributeBonuses, *v7); /*0x65fc24*/
        FormHeapFree(v9); /*0x65fc2a*/
      }
    }
  }
  else
  {
    v10 = FormHeapAlloc(8u); /*0x65fc36*/
    if ( v10 ) /*0x65fc40*/
    {
      *(_DWORD *)v10 = 0; /*0x65fc42*/
      *(_DWORD *)(v10 + 4) = 0; /*0x65fc48*/
    }
    else
    {
      v10 = 0; /*0x65fc51*/
    }
    this->attributeBonuses = (UInt8 **)v10; /*0x65fc53*/
  }
  v11 = this->attributeBonuses; /*0x65fc59*/
  if ( !v11[1] && !*v11 ) /*0x65fc65*/
  {
    v12 = (_DWORD *)FormHeapAlloc(8u); /*0x65fc6c*/
    if ( v12 ) /*0x65fc76*/
    {
      *v12 = 0; /*0x65fc7a*/
      v12[1] = 0; /*0x65fc7c*/
      BSSimpleList_PushFront(this->attributeBonuses, (int)v12); /*0x65fc86*/
    }
    else
    {
      BSSimpleList_PushFront(this->attributeBonuses, 0); /*0x65fc97*/
    }
  }
}
