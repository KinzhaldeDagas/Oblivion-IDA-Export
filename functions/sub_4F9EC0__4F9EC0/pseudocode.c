void __usercall sub_4F9EC0(double a1@<st0>, double st5_0@<st2>, double st6_0@<st1>, int a4, ExtraDataList *a5)
{
  ExtraScript *ExtraScriptEventList; // eax
  int **Singleton; // eax
  _DWORD *v7; // [esp-Ch] [ebp-10h]
  int v8; // [esp-4h] [ebp-8h]

  if ( a5 )
  {
    if ( ExtraDataList_GetExtraScriptEventList(a5) )
    {
      ExtraScriptEventList = ExtraDataList_GetExtraScriptEventList(a5);
      if ( !*((_DWORD *)ExtraScriptEventList + 2) )
      {
        v8 = (int)ExtraScriptEventList;
        v7 = *(_DWORD **)ExtraScriptEventList;
        Singleton = (int **)ScriptRunner_GetSingleton();
        sub_517950(Singleton, a1, st5_0, st6_0, v7, a4, v8);
      }
    }
  }
}
