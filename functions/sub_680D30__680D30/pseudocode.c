void __userpurge sub_680D30(int a1@<ecx>, double a2@<st1>, int a3)
{
  if ( a3 ) /*0x680d39*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 0x1E0))(a3); /*0x680d43*/
    *(float *)(a1 + 0x14) = a2; /*0x680d45*/
  }
  else
  {
    *(float *)(a1 + 0x14) = 0.0; /*0x680d4e*/
  }
}
