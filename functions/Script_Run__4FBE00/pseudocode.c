double __userpurge Script_Run@<st0>(
        Script *this@<ecx>,
        double result@<st0>,
        double a3@<st1>,
        TESObjectREFR *thisObj,
        char **a6,
        int a7,
        int ArgList)
{
  char v8; // cl
  ScriptRunner *Singleton; // eax
  int v10; // ebp
  double v11; // st7
  char v12; // [esp-Ch] [ebp-1Ch]

  v8 = ArgList;
  if ( (_BYTE)ArgList || this->info.dataLength > 4 )
  {
    if ( !LOBYTE(this->info.type)
      || this->questDelayTimeCounter <= 0.0
      || (this->questDelayTimeCounter = this->questDelayTimeCounter - flt_B33E9C,
          this->secondsPassed = this->secondsPassed + flt_B33E9C,
          this->questDelayTimeCounter <= 0.0) )
    {
      v12 = v8;
      Singleton = (ScriptRunner *)ScriptRunner_GetSingleton();
      Script_RunEvent__((ScriptRunner **)Singleton, a3, result, this, thisObj, a6, a7, v12, 0, 0, 0.0);
      if ( LOBYTE(this->info.type) )
      {
        result = 0.0;
        if ( flt_B09E28 > 0.0 )
        {
          if ( sub_4FAA90(this, "fQuestDelayTime", (UInt32 *)&ArgList)
            && (v10 = ArgList,
                *(float *)&ArgList = sub_4FA110((ScriptEventList *)a6, ArgList, 0),
                *(float *)&ArgList > (double)*(float *)&SrcStr) )
          {
            *(float *)&ArgList = sub_4FA110((ScriptEventList *)a6, v10, this);
            v11 = *(float *)&ArgList + this->questDelayTimeCounter;
          }
          else
          {
            v11 = this->questDelayTimeCounter + flt_B09E28;
          }
          this->questDelayTimeCounter = v11;
          result = 0.0;
          this->secondsPassed = 0.0;
        }
      }
      sub_4FB430(this);
    }
  }
  return result;
}
