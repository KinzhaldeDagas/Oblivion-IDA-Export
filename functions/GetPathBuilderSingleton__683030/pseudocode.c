void GetPathBuilderSingleton()
{
  PathBuilder *v0; // eax

  if ( !unk_B3BF80 ) /*0x683051*/
  {
    v0 = (PathBuilder *)FormHeapAlloc(0x48u); /*0x68305c*/
    if ( v0 ) /*0x683072*/
      unk_B3BF80 = (int)PathBuilder::PathBuilder(v0); /*0x68307b*/
    else
      unk_B3BF80 = 0; /*0x683092*/
  }
}
