0x902160: push    ebp
0x902161: mov     ebp, esp
0x902163: and     esp, 0FFFFFFF0h
0x902166: sub     esp, 0B4h
0x90216C: push    ebx
0x90216D: mov     ebx, ds:0BA9DE4h
0x902173: push    esi
0x902174: push    edi
0x902175: mov     edi, large fs:2Ch
0x90217C: mov     eax, [edi+ebx*4]
0x90217F: mov     ecx, [eax+1A4h]
0x902185: cmp     ecx, [eax+1A8h]
0x90218B: jnb     short loc_9021B8
0x90218D: mov     esi, eax
0x90218F: mov     ecx, [esi+1A4h]
0x902195: mov     dword ptr [ecx], offset aLtcvxlist; "LtCvxList"
0x90219B: mov     dword ptr [ecx+0Ch], offset aCheckhull; "checkHull"
0x9021A2: rdtsc
0x9021A4: mov     [esp+0C0h+var_B0], eax
0x9021A8: mov     edx, [esp+0C0h+var_B0]
0x9021AC: mov     [ecx+4], edx
0x9021AF: add     ecx, 10h
0x9021B2: mov     [esi+1A4h], ecx
0x9021B8: mov     esi, [ebp+arg_4]
0x9021BB: mov     eax, [esi+8]
0x9021BE: mov     ecx, ds:0B2FFE4h
0x9021C4: mov     [esp+0C0h+var_9C], eax
0x9021C8: mov     eax, [esi]
0x9021CA: mov     [esp+0C0h+var_88], ecx
0x9021CE: mov     [esp+0C0h+var_98], esi
0x9021D2: mov     [esp+0C0h+var_8E], 1
0x9021D9: mov     [esp+0C0h+var_8C], 0
0x9021E1: mov     [esp+0C0h+var_94], offset off_A9BB94
0x9021E9: mov     ecx, [eax+10h]
0x9021EC: mov     edx, [ecx]
0x9021EE: fld     dword ptr [edx+0Ch]
0x9021F1: mov     edx, [esi+4]
0x9021F4: mov     [esp+0C0h+var_84], ecx
0x9021F8: mov     eax, [eax+14h]
0x9021FB: fstp    [esp+0C0h+var_88]
0x9021FF: mov     [esp+0C0h+var_80], eax
0x902203: lea     ecx, [esp+0C0h+var_94]
0x902207: lea     eax, [esp+0C0h+var_AC]
0x90220B: push    eax
0x90220C: mov     eax, [ebp+arg_0]
0x90220F: mov     [esp+0C4h+var_A4], ecx
0x902213: mov     ecx, [ebp+arg_8]
0x902216: mov     [esp+0C4h+var_A0], edx
0x90221A: push    ecx
0x90221B: lea     edx, [esp+0C8h+var_A4]
0x90221F: push    edx
0x902220: push    eax
0x902221: mov     [esp+0D0h+var_AC], offset off_A9BB84
0x902229: mov     [esp+0D0h+var_A8], 0
0x90222E: call    sub_93F800
0x902233: mov     al, [esp+0D0h+var_A8]
0x902237: add     esp, 10h
0x90223A: test    al, al
0x90223C: jz      short loc_9022A3
0x90223E: mov     eax, [edi+ebx*4]
0x902241: mov     ecx, [eax+1A4h]
0x902247: cmp     ecx, [eax+1A8h]
0x90224D: jnb     short loc_902274
0x90224F: mov     ecx, [eax+1A4h]
0x902255: mov     dword ptr [ecx], offset aStchildren; "Stchildren"
0x90225B: rdtsc
0x90225D: mov     [esp+0C0h+var_B0], eax
0x902261: mov     edx, [esp+0C0h+var_B0]
0x902265: mov     eax, [edi+ebx*4]
0x902268: mov     [ecx+4], edx
0x90226B: add     ecx, 0Ch
0x90226E: mov     [eax+1A4h], ecx
0x902274: mov     eax, [ebp+arg_C]
0x902277: mov     edx, [ebp+arg_8]
0x90227A: lea     ecx, [esp+0C0h+var_7C]
0x90227E: push    ecx
0x90227F: mov     [esp+0C4h+var_74], eax
0x902283: mov     eax, [ebp+arg_0]
0x902286: push    edx
0x902287: push    eax
0x902288: push    esi
0x902289: mov     [esp+0D0h+var_78], 7F7FFFFFh
0x902291: mov     [esp+0D0h+var_7C], offset off_A9B4E0
0x902299: call    sub_9050F0
0x90229E: jmp     loc_902387
0x9022A3: mov     edx, [ebp+arg_8]
0x9022A6: lea     ecx, [esp+0C0h+var_70]
0x9022AA: push    ecx
0x9022AB: mov     ecx, [ebp+arg_0]
0x9022AE: push    edx
0x9022AF: lea     eax, [esp+0C8h+var_A4]
0x9022B3: push    eax
0x9022B4: push    ecx
0x9022B5: mov     [esp+0D0h+var_70], offset ??_7hkClosestCdPointCollector@@6B@; const hkClosestCdPointCollector::`vftable'
0x9022BD: mov     [esp+0D0h+var_40], 0
0x9022C8: mov     dword ptr [esp+0D0h+anonymous_0+0Ch], 7F7FFFFFh
0x9022D3: mov     [esp+0D0h+var_6C], 7F7FFFFFh
0x9022DB: call    sub_93F250
0x9022E0: mov     eax, [esp+0D0h+var_40]
0x9022E7: add     esp, 10h
0x9022EA: test    eax, eax
0x9022EC: jz      loc_90238A
0x9022F2: mov     edx, [esi]
0x9022F4: fld     dword ptr [esp+0C0h+anonymous_0+0Ch]
0x9022F8: fcomp   dword ptr [edx+1Ch]
0x9022FB: fnstsw  ax
0x9022FD: test    ah, 41h
0x902300: jnz     short loc_90233F
0x902302: mov     eax, [ebp+arg_0]
0x902305: movaps  xmm0, [esp+0C0h+var_60]
0x90230A: mov     ecx, [ebp+arg_C]
0x90230D: mov     edx, [ecx]
0x90230F: mov     [esp+0C0h+var_10], eax
0x902316: lea     eax, [esp+0C0h+var_30]
0x90231D: movaps  [esp+0C0h+var_30], xmm0
0x902325: movaps  xmm0, [esp+0C0h+anonymous_0]
0x90232A: push    eax
0x90232B: mov     [esp+0C4h+var_C], esi
0x902332: movaps  [esp+0C4h+var_20], xmm0
0x90233A: call    dword ptr [edx+4]
0x90233D: jmp     short loc_90238A
0x90233F: mov     eax, [edi+ebx*4]
0x902342: mov     ecx, [eax+1A4h]
0x902348: cmp     ecx, [eax+1A8h]
0x90234E: jnb     short loc_902375
0x902350: mov     ecx, [eax+1A4h]
0x902356: mov     dword ptr [ecx], offset aStchildren; "Stchildren"
0x90235C: rdtsc
0x90235E: mov     [esp+0C0h+var_B0], eax
0x902362: mov     edx, [esp+0C0h+var_B0]
0x902366: mov     eax, [edi+ebx*4]
0x902369: mov     [ecx+4], edx
0x90236C: add     ecx, 0Ch
0x90236F: mov     [eax+1A4h], ecx
0x902375: mov     eax, [ebp+arg_C]
0x902378: mov     ecx, [ebp+arg_8]
0x90237B: mov     edx, [ebp+arg_0]
0x90237E: push    eax
0x90237F: push    ecx
0x902380: push    esi
0x902381: push    edx
0x902382: call    sub_901E00
0x902387: add     esp, 10h
0x90238A: mov     eax, [edi+ebx*4]
0x90238D: mov     ecx, [eax+1A4h]
0x902393: cmp     ecx, [eax+1A8h]
0x902399: jnb     short loc_9023BF
0x90239B: mov     edi, eax
0x90239D: mov     ecx, [edi+1A4h]
0x9023A3: mov     dword ptr [ecx], offset aLt_0; "lt"
0x9023A9: rdtsc
0x9023AB: mov     [esp+0C0h+var_B0], eax
0x9023AF: mov     edx, [esp+0C0h+var_B0]
0x9023B3: mov     [ecx+4], edx
0x9023B6: add     ecx, 0Ch
0x9023B9: mov     [edi+1A4h], ecx
0x9023BF: pop     edi
0x9023C0: pop     esi
0x9023C1: pop     ebx
0x9023C2: mov     esp, ebp
0x9023C4: pop     ebp
0x9023C5: retn
