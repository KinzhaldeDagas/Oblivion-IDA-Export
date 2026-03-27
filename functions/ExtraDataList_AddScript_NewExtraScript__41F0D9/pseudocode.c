// positive sp value has been detected, the output may be wrong!
int __userpurge ExtraDataList_AddScript_::NewExtraScript@<eax>(ExtraDataList *a1@<esi>, int a2)
{
  ExtraScript *v2; // eax
  BSExtraData *v3; // eax

  v2 = (ExtraScript *)FormHeapAlloc(0x14u);
  if ( v2 )
    v3 = (BSExtraData *)ExtraScript::ExtraScript(v2, a2);
  else
    v3 = 0;
  return BaseExtraList_AddExtra(a1, v3);
}
