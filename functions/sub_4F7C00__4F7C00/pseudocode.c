char __cdecl sub_4F7C00(Actor *a1, int a2, int a3, double *a4)
{
  LowProcess *process; // ebx
  UInt32 procedureArrayIndex; // edi
  double v9; // st5

  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    {
      if ( a1->members.super.process )
      {
        if ( sub_5E0380(a1) )
        {
          process = a1->members.super.process;
          procedureArrayIndex = sub_5E0380(a1)->members.procedureArrayIndex;
          switch ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0)
                             + 4 * process->GetCurrentPackProcedure(process)) )
          {
            case 0:
              v9 = 0.0;
              break;
            case 1:
              v9 = dbl_A49318;
              break;
            case 2:
              v9 = 1.0;
              break;
            case 3:
              v9 = dbl_A3D0C0;
              break;
            case 4:
              v9 = dbl_A49310;
              break;
            case 5:
              v9 = dbl_A3F3E8;
              break;
            case 6:
              v9 = dbl_A49308;
              break;
            case 7:
              v9 = dbl_A2F910;
              break;
            case 8:
              v9 = dbl_A492F8;
              break;
            case 9:
              v9 = dbl_A49300;
              break;
            case 0xA:
              v9 = dbl_A492E8;
              break;
            case 0xB:
              v9 = dbl_A492D8;
              break;
            case 0xC:
              v9 = dbl_A3C800;
              break;
            case 0xD:
              v9 = dbl_A30E48;
              break;
            case 0xE:
              v9 = dbl_A492D0;
              break;
            case 0xF:
              v9 = dbl_A492F0;
              break;
            case 0x10:
              v9 = dbl_A3F3F0;
              break;
            case 0x11:
              v9 = dbl_A46E48;
              break;
            case 0x12:
              v9 = dbl_A45EB0;
              break;
            case 0x14:
              v9 = dbl_A3F3A0;
              break;
            case 0x16:
              v9 = dbl_A492C8;
              break;
            case 0x17:
              v9 = dbl_A492C0;
              break;
            case 0x18:
              v9 = dbl_A492B8;
              break;
            case 0x19:
              v9 = dbl_A2F920;
              break;
            case 0x1A:
              v9 = dbl_A492B0;
              break;
            case 0x1B:
              v9 = dbl_A492A8;
              break;
            case 0x1D:
              v9 = dbl_A492A0;
              break;
            case 0x1E:
              v9 = dbl_A49298;
              break;
            case 0x1F:
              v9 = dbl_A49290;
              break;
            case 0x20:
              v9 = dbl_A3AA50;
              break;
            case 0x21:
              v9 = dbl_A49288;
              break;
            case 0x22:
              v9 = dbl_A46970;
              break;
            case 0x23:
              v9 = dbl_A49398;
              break;
            case 0x24:
              v9 = dbl_A49390;
              break;
            case 0x25:
              v9 = dbl_A49388;
              break;
            case 0x26:
              v9 = dbl_A49380;
              break;
            case 0x27:
              v9 = dbl_A49378;
              break;
            case 0x28:
              v9 = dbl_A49370;
              break;
            case 0x29:
              v9 = dbl_A49368;
              break;
            case 0x2A:
              v9 = dbl_A49360;
              break;
            case 0x2C:
              v9 = dbl_A492E0;
              break;
            default:
              v9 = dbl_A3D360;
              break;
          }
          *a4 = v9;
        }
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Procedure >> %0.2f", *a4);
  return 1;
}
