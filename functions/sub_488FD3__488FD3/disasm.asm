0x488FD3: mov     ecx, [esi+4]
0x488FD6: test    ecx, ecx
0x488FD8: jz      loc_488EF4
0x488FDE: mov     ebx, [ecx+1Ch]
0x488FE1: mov     eax, [ebx+58h]
0x488FE4: shr     eax, 8
0x488FE7: test    al, 1
0x488FE9: jz      short loc_488FFE
0x488FEB: mov     ecx, (offset flt_B37ED0+210h)
0x488FF0: call    GameSetting_GetSafeFloatPointer
0x488FF5: fld     dword ptr [eax]
0x488FF7: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x488FFC: jmp     short sub_489003
0x488FFE: call    EffectItem_GetMagnitude
