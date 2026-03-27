void __userpurge sub_65D670(int a1@<ecx>, int a2@<edi>, double a3@<st2>, double a4@<st1>, double a5@<st0>, char a6)
{
  if ( !a6 && !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    sub_6765F0(a6, a2, a3, a4, a5, 0, FormID, 1);
    *(_DWORD *)(a1 + 0x608) = 0;
    ObjectRef = 0;
    FormID = 0;
  }
  *(_BYTE *)(a1 + 0x610) = a6;
}
