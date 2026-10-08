void __cdecl sub_925E30(_DWORD **a1, int a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // ebp
  _DWORD *v4; // esi

  v2 = (_DWORD *)**a1; /*0x925e46*/
  v3 = (unsigned int)v2 + *v2 + 0x10; /*0x925e52*/
  v4 = v2 + 4; /*0x925e64*/
  (*(void (__thiscall **)(int, const char *, int, _DWORD *, int, int))(*(_DWORD *)a2 + 4))( /*0x925e67*/
    a2,
    "Sector",
    8,
    v2,
    *v2 + 0x10,
    0x200);
  switch ( *(_BYTE *)v4 ) /*0x925e78*/
  {
    case 0: /*0x925e78*/
    case 2: /*0x925e78*/
    case 3: /*0x925e78*/
    case 4: /*0x925e78*/
    case 5: /*0x925e78*/
      def_925E78(v3, (unsigned int)v4 + *((unsigned __int8 *)v4 + 3)); /*0x925e9e*/
      break; /*0x925e9e*/
    case 1: /*0x925e78*/
      return;
    case 6: /*0x925e78*/
      (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Agent", 8, v4[1]); /*0x925e8e*/
      def_925E78(v3, (unsigned int)v4 + *((unsigned __int8 *)v4 + 3)); /*0x925e97*/
      break; /*0x925e97*/
    default:
      JUMPOUT(0x925E9F); /*0x925e9f*/
  }
}
