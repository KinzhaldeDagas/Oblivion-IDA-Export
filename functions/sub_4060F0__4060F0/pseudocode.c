int __stdcall sub_4060F0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  double v4; // st5
  double v5; // st6
  double v6; // st7
  InputGlobal *input; // ecx
  InputGlobal **p_input; // esi
  OSGlobals *v9; // edi
  InputGlobal *v11; // ecx
  InputGlobal **v12; // esi
  OSGlobals *v13; // edi
  LRESULT v14; // edi

  if ( Msg > 0x84 )
  {
    if ( Msg == 0x86 )
    {
      if ( !wParam )
        byte_B333F5 = 1;
    }
    else
    {
      if ( Msg == 0x105 )
        return 0;
      if ( Msg == 0x200 && sub_405370(OSGlobals, (char)hWnd, v4, v5, v6, (unsigned __int16)lParam, HIWORD(lParam)) )
        return 0;
    }
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  }
  else
  {
    if ( Msg != 0x84 )
    {
      switch ( Msg )
      {
        case 2u:
          if ( !OSGlobals )
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
          OSGlobals->quitGame = 1;
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        case 6u:
          if ( (_WORD)wParam )
          {
            if ( (unsigned int)(unsigned __int16)wParam - 1 <= 1 && !HIWORD(wParam) && OSGlobals )
            {
              input = OSGlobals->input;
              p_input = &OSGlobals->input;
              v9 = OSGlobals;
              if ( input )
              {
                InputGlobals::FlushKeyboardBuffer(input);
                InputGlobals::PollAndUpdateInputState(*p_input);
              }
              sub_47D0F0(&TimeInfo);
              v9->unk02 = 1;
              return 0;
            }
          }
          else if ( OSGlobals )
          {
            if ( !dword_B333F0 )
            {
              v11 = OSGlobals->input;
              v12 = &OSGlobals->input;
              v13 = OSGlobals;
              if ( v11 )
              {
                InputGlobals::FlushKeyboardBuffer(v11);
                InputGlobals::PollAndUpdateInputState(*v12);
              }
              OsGlobalsTime::UpdatetimeInfo(&TimeInfo);
              v13->unk02 = 0;
            }
          }
          break;
        case 0x14u:
          if ( ::hWnd != hWnd )
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
          return 1;
        case 0x47u:
          if ( !dword_B350D8 )
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
          sub_497BF0(*(_DWORD *)(lParam + 8), *(_DWORD *)(lParam + 0xC));
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        default:
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
      }
      return 0;
    }
    v14 = DefWindowProcA(hWnd, 0x84u, wParam, lParam);
    if ( OSGlobals && OSGlobals->input )
    {
      if ( v14 == 1 )
      {
        if ( byte_B02F99 )
        {
          while ( ShowCursor(0) > 0 )
            ;
          byte_B02F99 = 0;
        }
      }
      else if ( !byte_B02F99 )
      {
        ShowCursor(1);
        byte_B02F99 = 1;
        return v14;
      }
    }
    return v14;
  }
}
