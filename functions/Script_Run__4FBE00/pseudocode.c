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
  UInt32 v10; // ebp
  double v11; // st7
  char v12; // [esp-Ch] [ebp-1Ch]

  v8 = ArgList; /*0x4fbe03*/
  if ( (_BYTE)ArgList || this->info.dataLength > 4 ) /*0x4fbe0f*/
  {
    if ( !LOBYTE(this->info.type) /*0x4fbe43*/
      || this->questDelayTimeCounter <= 0.0
      || (this->questDelayTimeCounter = this->questDelayTimeCounter - *(float *)&MEMORY[0xB33E90][0xC],
          this->secondsPassed = this->secondsPassed + *(float *)&MEMORY[0xB33E90][0xC],
          this->questDelayTimeCounter <= 0.0) )
    {
      v12 = v8; /*0x4fbe5f*/
      Singleton = (ScriptRunner *)ScriptRunner_GetSingleton(); /*0x4fbe68*/
      ScriptRunner_RunEvent((ScriptRunner **)Singleton, a3, result, this, thisObj, a6, a7, v12, 0, 0, 0.0); /*0x4fbe6f*/
      if ( LOBYTE(this->info.type) ) /*0x4fbe74*/
      {
        result = 0.0; /*0x4fbe7c*/
        if ( flt_B09E28 > 0.0 ) /*0x4fbe89*/
        {
          if ( sub_4FAA90(this, "fQuestDelayTime", (UInt32 *)&ArgList) /*0x4fbec2*/
            && (v10 = ArgList,
                *(float *)&ArgList = ScriptEventList::GetVariableValue((ScriptEventList *)a6, ArgList, 0),
                *(float *)&ArgList > (double)*(float *)&SrcStr) )
          {
            *(float *)&ArgList = ScriptEventList::GetVariableValue((ScriptEventList *)a6, v10, this); /*0x4fbecd*/
            v11 = *(float *)&ArgList + this->questDelayTimeCounter; /*0x4fbed5*/
          }
          else
          {
            v11 = this->questDelayTimeCounter + flt_B09E28; /*0x4fbedd*/
          }
          this->questDelayTimeCounter = v11; /*0x4fbee3*/
          result = 0.0; /*0x4fbee7*/
          this->secondsPassed = 0.0; /*0x4fbee9*/
        }
      }
      sub_4FB430(this); /*0x4fbeee*/
    }
  }
  return result; /*0x4fbe49*/
}
