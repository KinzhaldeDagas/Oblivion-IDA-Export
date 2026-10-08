void __cdecl ActiveEffect_Base_SaveAEList_::SetOldHeader(int a1, int a2, int a3, int a4, unsigned __int8 *a5)
{
  unsigned __int8 *bufferCursor; // esi

  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x68dffe*/
  if ( bufferCursor > a5 + 0xFFFF ) /*0x68e009*/
    PrintError( /*0x68e01a*/
      "Save Game Block in file %s on line %i is greater than maximum short size",
      ".\\Magic\\ActiveEffect.cpp",
      0x36B);
  *(_WORD *)a5 = (_WORD)bufferCursor - (_WORD)a5; /*0x68e024*/
  ActiveEffect_Base_SaveAEList_::Epilogue(); /*0x68e025*/
}
