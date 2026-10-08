// Oblivion movement helper for path/procedure movement: defaults -1 to 0x101, reads current package flags +0x1C, package AlwaysRun bit 0x2000 forces 0x201, preserves movement flags 0x0C00, then writes movement flags via vfunc +0x2C8.
int __userpurge sub_629E20@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  int result; // eax
  int v7; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x34C))(a1); /*0x629e2b*/
  if ( !(_BYTE)result ) /*0x629e2f*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x184))(a1, a3); /*0x629e4e*/
    (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x2C0))(a1, a2); /*0x629e6e*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x380))(a5) /*0x629e9d*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x36C))(a1) == 4 )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x380))(a5); /*0x629ea9*/
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 0x58) + 0x2C8))(*(_DWORD *)(v7 + 0x58)); /*0x629eb7*/
    }
    else
    {
      return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x2C8))(a1); /*0x629eca*/
    }
  }
  return result; /*0x629ebb*/
}
