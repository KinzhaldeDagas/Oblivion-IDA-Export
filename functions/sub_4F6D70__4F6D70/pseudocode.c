char __usercall sub_4F6D70@<al>(int a1@<ebx>, TESObjectREFR *a2, TESForm *a3, TESChildCELL *a4, double *a5)
{
  TESForm *v7; // edi
  TESObjectREFR *v8; // esi
  TESObjectCELL *ParentCell; // ebx
  const char *v10; // eax
  double v11; // st5
  const char *v13; // [esp-8h] [ebp-18h]
  size_t v14; // [esp-4h] [ebp-14h]

  *a5 = 0.0;
  v7 = 0;
  if ( a3 )
  {
    if ( a3->member.type == kFormType_Cell )
      v7 = a3;
  }
  v8 = (TESObjectREFR *)a4;
  if ( a4 && (unsigned int)LOBYTE(a4[1].vtbl) - 0x31 <= 2 || (v8 = a2) != 0 )
  {
    if ( v8 == (TESObjectREFR *)dword_B3618C && (TESForm *)dword_B36190 == v7 )
    {
      *a5 = flt_B36194;
    }
    else
    {
      if ( v8 )
      {
        HIDWORD(v14) = a1;
        ParentCell = TESObjectREFR_GetParentCell(v8);
        if ( ParentCell )
        {
          if ( v7 )
          {
            LODWORD(v14) = TESForm::GetEditorNameLen(v7);
            v13 = v7->vtbl->GetEditorName(v7);
            v10 = ParentCell->vtbl->GetEditorName((TESForm *)ParentCell);
            if ( !_strnicmp(v10, v13, v14) )
              *a5 = 1.0;
          }
        }
      }
      v11 = *a5;
      dword_B3618C = (int)v8;
      flt_B36194 = v11;
      dword_B36190 = (int)v7;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetInCell >> %0.2f", *a5);
  return 1;
}
