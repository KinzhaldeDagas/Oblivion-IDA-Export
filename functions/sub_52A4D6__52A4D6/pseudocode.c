// positive sp value has been detected, the output may be wrong!
void __userpurge sub_52A4D6(int a1@<ebx>, int a2@<ebp>, int a3@<esi>, int a4)
{
  _DWORD *v4; // ebp
  ScriptEventList *v5; // ecx

  v4 = *(_DWORD **)(a2 + 4);
  if ( v4 == (_DWORD *)a1 )
  {
    *(_BYTE *)(a3 + 0x5C) = a1;
    if ( (a4 & 0x8000000) != 0 )
    {
      v5 = *(ScriptEventList **)(a3 + 0x58);
      if ( v5 != (ScriptEventList *)a1 )
        ScriptEventList_Preload_(v5);
    }
  }
  else
  {
    sub_52A496(a1, v4, a4);
  }
}
