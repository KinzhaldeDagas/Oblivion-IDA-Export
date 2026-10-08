// positive sp value has been detected, the output may be wrong!
int __userpurge ExtraDataList_AddScript_::NewExtraScript@<eax>(ExtraDataList *a1@<esi>, int a2)
{
  ExtraScript *v2; // eax
  BSExtraData *v3; // eax

  v2 = (ExtraScript *)FormHeapAlloc(0x14u); /*0x41f0db*/
  if ( v2 ) /*0x41f0f1*/
    v3 = (BSExtraData *)ExtraScript::ExtraScript(v2, a2); /*0x41f0fa*/
  else
    v3 = 0; /*0x41f101*/
  return BaseExtraList_AddExtra(a1, v3); /*0x41f123*/
}
