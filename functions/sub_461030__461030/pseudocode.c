double __userpurge sub_461030@<st0>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double result@<st0>,
        char a5)
{
  float v5; // edi
  int v7; // eax
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v9; // edi
  BSExtraDataVtbl *v10; // eax

  v5 = *(float *)&OSGlobals->mainThreadID;
  if ( ((int (__usercall *)@<eax>(double@<st0>, double@<st1>))GetCurrentThreadId)(result, a3) == LODWORD(v5) )
    LOBYTE(v7) = *((_BYTE *)this + 0x18);
  else
    v7 = *(this + 6) >> 0x12;
  if ( (v7 & 1) != 0 )
  {
    sub_45CE00(this, st5_0, a3, result);
    sub_45CEE0(this);
    sub_459140(this);
    if ( a5 )
    {
      sub_677EC0((int)&ActorProcessManager_ptr, v5, st5_0, 0.0, 0.0, 0.0);
      result = 0.0;
      sub_4424D0(TES, 0.0);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      v9 = (ExtraDataList *)ParentCell;
      if ( ParentCell )
      {
        if ( TESObjectCELL_IsInterior(ParentCell) )
          v10 = sub_424180(v9 + 2);
        else
          v10 = (BSExtraDataVtbl *)bhkWorldM;
        if ( v10 )
          sub_88BC20(v10);
      }
    }
    sub_45D030(this);
    sub_45D190(this);
  }
  return result;
}
