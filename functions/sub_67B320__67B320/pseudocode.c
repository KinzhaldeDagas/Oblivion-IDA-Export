char __thiscall sub_67B320(Actor **this, Actor *a2, Actor **a3)
{
  Actor **v3; // edi
  char result; // al
  int *v5; // ebp
  Actor **v6; // esi
  int v7; // edx
  Actor *v8; // edx
  Actor *v9; // ecx
  Actor **v10; // eax

  v3 = this; /*0x67b323*/
  result = 0; /*0x67b325*/
  v5 = 0; /*0x67b327*/
  v6 = this; /*0x67b32f*/
  if ( this == (Actor **)&qword_B3BB2C[0x8F] ) /*0x67b331*/
  {
    v7 = 0; /*0x67b333*/
    if ( this ) /*0x67b337*/
    {
      do /*0x67b34c*/
      {
        if ( *this ) /*0x67b340*/
          ++v7; /*0x67b344*/
        this = (Actor **)*(this + 1); /*0x67b347*/
      }
      while ( this ); /*0x67b34c*/
      if ( v7 == 2 ) /*0x67b351*/
        goto LABEL_9; /*0x67b351*/
    }
  }
  if ( LODWORD(qword_B3BB2C[0x92]) && a2 == *(Actor **)LODWORD(qword_B3BB2C[0x92]) ) /*0x67b363*/
LABEL_9:
    qword_B3BB2C[0x92] = 0.0; /*0x67b365*/
  if ( LODWORD(qword_B3BB2C[0x93]) ) /*0x67b36b*/
  {
    if ( a2 == *(Actor **)LODWORD(qword_B3BB2C[0x93]) ) /*0x67b37b*/
      qword_B3BB2C[0x93] = 0.0; /*0x67b37d*/
  }
  if ( a3 ) /*0x67b389*/
    v6 = a3; /*0x67b38b*/
  v8 = 0; /*0x67b38d*/
  if ( v6 ) /*0x67b391*/
  {
    while ( 1 ) /*0x67b397*/
    {
      v9 = v6[1]; /*0x67b397*/
      if ( !v9 && !*v6 ) /*0x67b39e*/
        break; /*0x67b39e*/
      v8 = *v6; /*0x67b3a2*/
      if ( *v6 == a2 ) /*0x67b3a8*/
        goto LABEL_22; /*0x67b3a8*/
      v5 = (int *)v6; /*0x67b3aa*/
      v6 = (Actor **)v6[1]; /*0x67b3ac*/
      if ( !v9 ) /*0x67b3b0*/
        return result; /*0x67b3b0*/
    }
    if ( v8 != a2 ) /*0x67b3bc*/
      return result; /*0x67b3bc*/
LABEL_22:
    if ( v5 ) /*0x67b3c0*/
    {
      BSSimpleList_Remove(v5, (int)a2); /*0x67b3c9*/
      if ( v6 == (Actor **)v3[2] ) /*0x67b3d1*/
        v3[2] = (Actor *)v5; /*0x67b3d3*/
    }
    else
    {
      v10 = (Actor **)v3[1]; /*0x67b3d8*/
      if ( v10 ) /*0x67b3dd*/
      {
        v3[1] = v10[1]; /*0x67b3e2*/
        *v3 = *v10; /*0x67b3e8*/
        FormHeapFree((unsigned int)v10); /*0x67b3ea*/
      }
      else
      {
        *v3 = 0; /*0x67b3f4*/
      }
      if ( !v3[1] ) /*0x67b3fa*/
        v3[2] = (Actor *)v3; /*0x67b400*/
    }
    if ( (a2->members.super.super.super.flags & 0x20) != 0 && !sub_45A500(g_TESSaveLoadGame) ) /*0x67b417*/
      sub_659BC0(a2); /*0x67b422*/
    return 1; /*0x67b427*/
  }
  return result; /*0x67b3b2*/
}
