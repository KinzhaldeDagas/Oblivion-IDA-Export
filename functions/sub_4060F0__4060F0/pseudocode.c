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

  if ( Msg > 0x84 ) /*0x40610a*/
  {
    if ( Msg == 0x86 ) /*0x4062a5*/
    {
      if ( !wParam ) /*0x4062db*/
        unk_B333F5 = 1; /*0x4062dd*/
    }
    else
    {
      if ( Msg == 0x105 ) /*0x4062aa*/
        return 0; /*0x4061be*/
      if ( Msg == 0x200 /*0x4062c7*/
        && sub_405370(MEMORY[0xB33398], (char)hWnd, v4, v5, v6, (unsigned __int16)lParam, HIWORD(lParam)) )
      {
        return 0; /*0x4062d6*/
      }
    }
    return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x4062e4*/
  }
  else
  {
    if ( Msg != 0x84 ) /*0x406110*/
    {
      switch ( Msg ) /*0x406129*/
      {
        case 2u: /*0x406129*/
          if ( !MEMORY[0xB33398] ) /*0x4061f6*/
            return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x4061f6*/
          MEMORY[0xB33398]->quitGame = 1; /*0x406200*/
          return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x40620d*/
        case 6u: /*0x406129*/
          if ( (_WORD)wParam ) /*0x406139*/
          {
            if ( (unsigned int)(unsigned __int16)wParam - 1 <= 1 && !HIWORD(wParam) && MEMORY[0xB33398] ) /*0x40614f*/
            {
              input = MEMORY[0xB33398]->input; /*0x406151*/
              p_input = &MEMORY[0xB33398]->input; /*0x406156*/
              v9 = MEMORY[0xB33398]; /*0x406159*/
              if ( input ) /*0x40615b*/
              {
                InputGlobals::FlushKeyboardBuffer(input); /*0x40615d*/
                InputGlobals::PollAndUpdateInputState(*p_input); /*0x406164*/
              }
              sub_47D0F0(MEMORY[0xB33E90]); /*0x40616e*/
              v9->unk02 = 1; /*0x406173*/
              return 0; /*0x40617d*/
            }
          }
          else if ( MEMORY[0xB33398] ) /*0x406187*/
          {
            if ( !unk_B333F0 ) /*0x406190*/
            {
              v11 = MEMORY[0xB33398]->input; /*0x406192*/
              v12 = &MEMORY[0xB33398]->input; /*0x406197*/
              v13 = MEMORY[0xB33398]; /*0x40619a*/
              if ( v11 ) /*0x40619c*/
              {
                InputGlobals::FlushKeyboardBuffer(v11); /*0x40619e*/
                InputGlobals::PollAndUpdateInputState(*v12); /*0x4061a5*/
              }
              OsGlobalsTime::UpdatetimeInfo(MEMORY[0xB33E90]); /*0x4061af*/
              v13->unk02 = 0; /*0x4061b4*/
            }
          }
          break; /*0x40617d*/
        case 0x14u: /*0x406129*/
          if ( *(HWND *)&MEMORY[0xB33E90][0x1118] != hWnd ) /*0x406216*/
            return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x406216*/
          return 1; /*0x406225*/
        case 0x47u: /*0x406129*/
          if ( !*(_DWORD *)&MEMORY[0xB33E90][0x1248] ) /*0x4061c8*/
            return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x4061c8*/
          sub_497BF0(*(_DWORD *)(lParam + 8), *(_DWORD *)(lParam + 0xC)); /*0x4061d6*/
          return DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x4061ec*/
        default:
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
      }
      return 0; /*0x40614f*/
    }
    v14 = DefWindowProcA(hWnd, 0x84u, wParam, lParam); /*0x406240*/
    if ( MEMORY[0xB33398] && MEMORY[0xB33398]->input ) /*0x40624b*/
    {
      if ( v14 == 1 ) /*0x406254*/
      {
        if ( byte_B02F99 ) /*0x40627e*/
        {
          while ( ShowCursor(0) > 0 ) /*0x40628c*/
            ; /*0x406286*/
          byte_B02F99 = 0; /*0x40628e*/
        }
      }
      else if ( !byte_B02F99 ) /*0x40625d*/
      {
        ShowCursor(1); /*0x406261*/
        byte_B02F99 = 1; /*0x40626c*/
        return v14; /*0x406274*/
      }
    }
    return v14; /*0x406295*/
  }
}
