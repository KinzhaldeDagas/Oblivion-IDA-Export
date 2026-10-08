void __usercall sub_459A10(
        char a1@<bpl>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>)
{
  DWORD (__stdcall *v9)(); // esi

  sub_4599B0(a1, a7, a8, a9); /*0x459a10*/
  if ( sub_578FE0() != 3 || GetOpenedMenuCode() != 3 ) /*0x459a27*/
  {
    MenuTopicManager::Destroy(); /*0x459a29*/
    a9 = CloseAllMenus(a8, a1, a7, a9); /*0x459a2e*/
  }
  sub_5791A0(a1, a7, a8); /*0x459a34*/
  sub_5791E0(a9, a6, a7, a8, a5, a2, a3, a4); /*0x459a39*/
  sub_579220(a1, a7, a8, a9); /*0x459a3e*/
  v9 = GetTickCount;                            // MEF v30 hook contract: preserve both GetTickCount calls and dword_B33B08 write, then reload dword_B33B08 after the second call before unsigned elapsed comparison. Do not carry start in volatile ECX across the API call. /*0x459a43*/
  unk_B33B08 = GetTickCount(); /*0x459a4b*/
  if ( v9() > unk_B33B08 + 0xBB8 ) /*0x459a61*/
  {
    if ( sub_57BAC0() ) /*0x459a63*/
      sub_57B950(a1, a7, a8, 0, 0.0); /*0x459a86*/
    else
      sub_440AF0((int)MEMORY[0xB333A0], a7, a8, a1, 1, 0, 0); /*0x459a78*/
  }
}
