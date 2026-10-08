// positive sp value has been detected, the output may be wrong!
void __userpurge sub_52A4D6(char *a1@<ebx>, int a2@<ebp>, int a3@<esi>, int a4)
{
  char **v4; // ebp
  ScriptEventList *v5; // ecx

  v4 = *(char ***)(a2 + 4); /*0x52a4d6*/
  if ( v4 == (char **)a1 ) /*0x52a4db*/
  {
    *(_BYTE *)(a3 + 0x5C) = (_BYTE)a1; /*0x52a4e1*/
    if ( (a4 & 0x8000000) != 0 ) /*0x52a4eb*/
    {
      v5 = *(ScriptEventList **)(a3 + 0x58); /*0x52a4ed*/
      if ( v5 != (ScriptEventList *)a1 ) /*0x52a4f2*/
        ScriptEventList_Preload_(v5); /*0x52a4f4*/
    }
  }
  else
  {
    sub_52A496(a1, v4, a3, a4); /*0x52a4db*/
  }
}
