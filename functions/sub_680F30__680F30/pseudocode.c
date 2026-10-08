int __cdecl sub_680F30(MobileObject *a1)
{
  bhkCharacterProxy *CharProxy; // eax
  int v2; // eax

  if ( a1 && (CharProxy = MobileObject_GetCharProxy(a1)) != 0 && (v2 = *((_DWORD *)CharProxy + 0xDA)) != 0 ) /*0x680f49*/
    return *(_DWORD *)(v2 + 8); /*0x680f4b*/
  else
    return 0; /*0x680f4f*/
}
