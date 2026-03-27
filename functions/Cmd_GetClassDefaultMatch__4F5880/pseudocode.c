char __cdecl Cmd_GetClassDefaultMatch(int a1, int a2, int a3, double *a4)
{
  TESObjectREFR *DefaultClass; // esi
  double v8; // st7
  TESObjectREFR *BaseClass; // eax
  TESObjectCELL *ParentCell; // ebx

  *a4 = 0.0;
  DefaultClass = (TESObjectREFR *)Actor_GetDefaultClass(TESDataHandler_g_PlayerRef);
  if ( (TESObjectREFR *)Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef) == DefaultClass )
  {
    v8 = dbl_A3D0C0;
LABEL_6:
    *a4 = v8;
    goto LABEL_7;
  }
  if ( DefaultClass )
  {
    BaseClass = (TESObjectREFR *)Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef);
    ParentCell = TESObjectREFR_GetParentCell(BaseClass);
    if ( TESObjectREFR_GetParentCell(DefaultClass) == ParentCell )
    {
      v8 = 1.0;
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsMyClassDefault >> %0.2f", *a4);
  return 1;
}
