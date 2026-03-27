0x906940: push    ebp
0x906941: mov     ebp, esp
0x906943: and     esp, 0FFFFFFF0h
0x906946: sub     esp, 10h
0x906949: mov     eax, [ebp+arg_0]
0x90694C: mov     ecx, [eax+8]
0x90694F: mov     edx, [ebp+arg_4]
0x906952: fld     dword ptr [ecx+0A0h]
0x906958: mov     eax, [edx+8]
0x90695B: fcomp   dword ptr [eax+0A0h]
0x906961: mov     ecx, ds:0BA7D98h
0x906967: mov     edx, [ecx]
0x906969: push    1Ch
0x90696B: push    40h ; '@'
0x90696D: fnstsw  ax
0x90696F: test    ah, 5
0x906972: jp      short loc_90698C
0x906974: call    dword ptr [edx+10h]
0x906977: mov     ecx, [ebp+arg_C]
0x90697A: push    ecx
0x90697B: mov     ecx, eax
0x90697D: mov     word ptr [eax+4], 40h ; '@'
0x906983: call    sub_906730
0x906988: mov     esp, ebp
0x90698A: pop     ebp
0x90698B: retn
0x90698C: call    dword ptr [edx+10h]
0x90698F: mov     ecx, [ebp+arg_C]
0x906992: mov     [eax+8], ecx
0x906995: mov     word ptr [eax+4], 40h ; '@'
0x90699B: mov     word ptr [eax+6], 1
0x9069A1: xor     ecx, ecx
0x9069A3: mov     [esp+10h+var_4], 7F7FFFFFh
0x9069AB: movss   xmm0, [esp+10h+var_4]
0x9069B1: mov     [eax+0Ch], ecx
0x9069B4: mov     [eax+10h], ecx
0x9069B7: mov     dword ptr [eax+14h], 80000000h
0x9069BE: shufps  xmm0, xmm0, 0
0x9069C2: movaps  xmmword ptr [eax+30h], xmm0
0x9069C6: movaps  xmmword ptr [eax+20h], xmm0
0x9069CA: mov     dword ptr [eax], offset off_A9BEAC
0x9069D0: mov     esp, ebp
0x9069D2: pop     ebp
0x9069D3: retn
