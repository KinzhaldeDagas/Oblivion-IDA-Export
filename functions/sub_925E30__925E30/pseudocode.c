void __cdecl sub_925E30(_DWORD **a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // ebp
  _DWORD *v4; // esi

  v2 = (_DWORD *)**a1;
  v3 = (int)v2 + *v2 + 0x10;
  v4 = v2 + 4;
  (*(void (__thiscall **)(int, const char *, int, _DWORD *, int, int))(*(_DWORD *)a2 + 4))(
    a2,
    "Sector",
    8,
    v2,
    *v2 + 0x10,
    0x200);
  switch ( *(_BYTE *)v4 )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
      def_925E78(v3, (int)v4 + *((unsigned __int8 *)v4 + 3));
      break;
    case 1:
      return;
    case 6:
      (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Agent", 8, v4[1]);
      def_925E78(v3, (int)v4 + *((unsigned __int8 *)v4 + 3));
      break;
    default:
      JUMPOUT(0x925E9F);
  }
}
