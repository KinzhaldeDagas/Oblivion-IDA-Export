0x8CA2A0: sub     esp, 210h
0x8CA2A6: mov     eax, ds:0B30AACh
0x8CA2AB: push    esi
0x8CA2AC: push    edi
0x8CA2AD: mov     edi, ecx
0x8CA2AF: mov     ecx, ds:0BA7FB0h
0x8CA2B5: push    offset aShutingDownVis; "Shuting down Visual Debugger.."
0x8CA2BA: mov     [esp+21Ch+var_4], eax
0x8CA2C1: mov     eax, [ecx]
0x8CA2C3: push    1293ADEFh
0x8CA2C8: call    dword ptr [eax+18h]
0x8CA2CB: mov     esi, [edi+10h]
0x8CA2CE: dec     esi
0x8CA2CF: js      short loc_8CA33E
0x8CA2D1: mov     ecx, [edi+0Ch]
0x8CA2D4: lea     eax, [ecx+esi*8]
0x8CA2D7: mov     eax, [eax+4]
0x8CA2DA: mov     edx, [eax+0Ch]
0x8CA2DD: lea     ecx, [eax+0Ch]
0x8CA2E0: push    3C87FCB9h
0x8CA2E5: call    dword ptr [edx+14h]
0x8CA2E8: push    esi
0x8CA2E9: mov     ecx, edi
0x8CA2EB: call    sub_8C9F30
0x8CA2F0: push    ecx
0x8CA2F1: mov     eax, esp
0x8CA2F3: mov     byte ptr [eax], 1
0x8CA2F6: push    200h
0x8CA2FB: lea     eax, [esp+220h+var_204]
0x8CA2FF: push    eax
0x8CA300: lea     ecx, [esp+224h+var_210]
0x8CA304: call    sub_8BBFB0
0x8CA309: push    offset aClientDeleted_; "Client deleted."
0x8CA30E: lea     ecx, [esp+21Ch+var_210]
0x8CA312: call    sub_8BBDB0
0x8CA317: mov     ecx, ds:0BA7FB0h
0x8CA31D: mov     edx, [ecx]
0x8CA31F: push    56h ; 'V'
0x8CA321: push    offset a_Hkvisualdebug; ".\\hkVisualDebugger.cpp"
0x8CA326: lea     eax, [esp+220h+var_204]
0x8CA32A: push    eax
0x8CA32B: push    0FFFFFFFFh
0x8CA32D: push    0
0x8CA32F: call    dword ptr [edx+8]
0x8CA332: lea     ecx, [esp+218h+var_210]
0x8CA336: call    sub_8BC000
0x8CA33B: dec     esi
0x8CA33C: jns     short loc_8CA2D1
0x8CA33E: mov     ecx, [edi+8]
0x8CA341: test    ecx, ecx
0x8CA343: jz      short loc_8CA39D
0x8CA345: mov     edx, [ecx]
0x8CA347: push    1
0x8CA349: call    dword ptr [edx]
0x8CA34B: push    ecx
0x8CA34C: mov     eax, esp
0x8CA34E: mov     dword ptr [edi+8], 0
0x8CA355: mov     byte ptr [eax], 1
0x8CA358: push    200h
0x8CA35D: lea     eax, [esp+220h+var_204]
0x8CA361: push    eax
0x8CA362: lea     ecx, [esp+224h+var_210]
0x8CA366: call    sub_8BBFB0
0x8CA36B: push    offset aServerDeleted_; "Server deleted."
0x8CA370: lea     ecx, [esp+21Ch+var_210]
0x8CA374: call    sub_8BBDB0
0x8CA379: mov     ecx, ds:0BA7FB0h
0x8CA37F: mov     edx, [ecx]
0x8CA381: push    5Dh ; ']'
0x8CA383: push    offset a_Hkvisualdebug; ".\\hkVisualDebugger.cpp"
0x8CA388: lea     eax, [esp+220h+var_204]
0x8CA38C: push    eax
0x8CA38D: push    0FFFFFFFFh
0x8CA38F: push    0
0x8CA391: call    dword ptr [edx+8]
0x8CA394: lea     ecx, [esp+218h+var_210]
0x8CA398: call    sub_8BC000
0x8CA39D: mov     ecx, ds:0BA7FB0h
0x8CA3A3: mov     edx, [ecx]
0x8CA3A5: call    dword ptr [edx+1Ch]
0x8CA3A8: mov     ecx, [esp+218h+var_4]
0x8CA3AF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CA3B4: pop     edi
0x8CA3B5: pop     esi
0x8CA3B6: add     esp, 210h
0x8CA3BC: retn
