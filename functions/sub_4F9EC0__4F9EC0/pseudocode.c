void __cdecl sub_4F9EC0(BSStringT *a1, ExtraDataList *a2)
{
  ExtraScript *ExtraScriptEventList; // eax
  ScriptRunner **Singleton; // eax
  Script *v7; // [esp-Ch] [ebp-10h]
  ScriptEventList *v8; // [esp-4h] [ebp-8h]

  if ( a2 ) /*0x4f9ec7*/
  {
    if ( ExtraDataList_GetExtraScriptEventList(a2) ) /*0x4f9ecb*/
    {
      ExtraScriptEventList = ExtraDataList_GetExtraScriptEventList(a2); /*0x4f9ed6*/
      if ( !*((_DWORD *)ExtraScriptEventList + 2) ) /*0x4f9edb*/
      {
        v8 = (ScriptEventList *)ExtraScriptEventList; /*0x4f9ee7*/
        v7 = *(Script **)ExtraScriptEventList; /*0x4f9ee9*/
        Singleton = ScriptRunner_GetSingleton(); /*0x4f9eea*/
        sub_517950(Singleton, v7, a1, v8); /*0x4f9ef1*/
      }
    }
  }
}
