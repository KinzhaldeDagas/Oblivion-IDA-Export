0x962E30: push    ebp
0x962E31: mov     ebp, esp
0x962E33: and     esp, 0FFFFFFF8h
0x962E36: sub     esp, 150h
0x962E3C: mov     eax, [ebp+arg_18]
0x962E3F: fld     dword ptr [eax]
0x962E41: mov     edx, [ebp+arg_8]
0x962E44: fsub    dword ptr [edx]
0x962E46: mov     ecx, [ebp+arg_4]
0x962E49: push    esi
0x962E4A: push    edi
0x962E4B: fstp    [esp+158h+var_74]
0x962E52: fld     dword ptr [eax+4]
0x962E55: fsub    dword ptr [edx+4]
0x962E58: fstp    [esp+158h+var_70]
0x962E5F: fld     dword ptr [eax+8]
0x962E62: mov     eax, [ebp+arg_C]
0x962E65: fsub    dword ptr [edx+8]
0x962E68: mov     edx, [ebp+arg_10]
0x962E6B: fstp    [esp+158h+var_6C]
0x962E72: fld     dword ptr [eax]
0x962E74: fld     dword ptr [edx]
0x962E76: fsub    st, st(1)
0x962E78: fstp    dword ptr [esp+158h+var_E0]
0x962E7C: fld     dword ptr [eax+4]
0x962E7F: fld     dword ptr [edx+4]
0x962E82: fsub    st, st(1)
0x962E84: fstp    dword ptr [esp+158h+var_E0+4]
0x962E88: fld     dword ptr [eax+8]
0x962E8B: mov     eax, dword ptr [esp+158h+var_E0]
0x962E8F: fld     dword ptr [edx+8]
0x962E92: mov     dword ptr [esp+158h+var_24], eax
0x962E99: fsub    st, st(1)
0x962E9B: mov     edx, dword ptr [esp+158h+var_E0+4]
0x962E9F: mov     dword ptr [esp+158h+var_24+4], edx
0x962EA6: fstp    [esp+158h+var_D8]
0x962EAD: mov     eax, [esp+158h+var_D8]
0x962EB4: mov     [esp+158h+var_1C], eax
0x962EBB: mov     eax, [ebp+arg_14]
0x962EBE: fld     dword ptr [eax]
0x962EC0: fsub    st, st(3)
0x962EC2: fstp    dword ptr [esp+158h+var_100]
0x962EC6: mov     edx, dword ptr [esp+158h+var_100]
0x962ECA: fld     dword ptr [eax+4]
0x962ECD: mov     [esp+158h+var_18], edx
0x962ED4: fsub    st, st(2)
0x962ED6: fstp    dword ptr [esp+158h+var_100+4]
0x962EDA: fld     dword ptr [eax+8]
0x962EDD: mov     eax, dword ptr [esp+158h+var_100+4]
0x962EE1: fsub    st, st(1)
0x962EE3: mov     [esp+158h+var_14], eax
0x962EEA: fstp    [esp+158h+var_F8]
0x962EEE: mov     edx, [esp+158h+var_F8]
0x962EF2: fld     [esp+158h+var_F8]
0x962EF6: mov     [esp+158h+var_10], edx
0x962EFD: fst     [esp+158h+var_88]
0x962F04: fld     dword ptr [esp+158h+var_E0+4]
0x962F08: fst     [esp+158h+var_F0]
0x962F0C: fld     dword ptr [esp+158h+var_100+4]
0x962F10: fst     [esp+158h+var_38]
0x962F17: fld     [esp+158h+var_D8]
0x962F1E: fst     [esp+158h+var_A8]
0x962F25: fld     st(2)
0x962F27: fmul    st, st(4)
0x962F29: fxch    st(1)
0x962F2B: fmul    st, st(2)
0x962F2D: fsubp   st(1), st
0x962F2F: fstp    dword ptr [esp+158h+var_128]
0x962F33: fld     dword ptr [esp+158h+var_100]
0x962F37: fst     [esp+158h+var_80]
0x962F3E: fld     dword ptr [esp+158h+var_E0]
0x962F42: fst     [esp+158h+var_C0]
0x962F49: fxch    st(1)
0x962F4B: fmul    [esp+158h+var_A8]
0x962F52: fxch    st(1)
0x962F54: fmulp   st(4), st
0x962F56: fsubrp  st(3), st
0x962F58: fxch    st(2)
0x962F5A: fstp    dword ptr [esp+158h+var_128+4]
0x962F5E: fld     [esp+158h+var_C0]
0x962F65: fmulp   st(2), st
0x962F67: fmul    [esp+158h+var_80]
0x962F6E: fsubp   st(1), st
0x962F70: fstp    [esp+158h+var_120]
0x962F74: fld     dword ptr [ecx+4]
0x962F77: fsubp   st(3), st
0x962F79: lea     esi, [ecx+1Ch]
0x962F7C: fxch    st(2)
0x962F7E: lea     edi, [ecx+28h]
0x962F81: fstp    dword ptr [esp+158h+var_D0]
0x962F88: mov     eax, dword ptr [esp+158h+var_D0]
0x962F8F: mov     [esp+158h+var_C], eax
0x962F96: fsub    dword ptr [ecx+8]
0x962F99: fstp    dword ptr [esp+158h+var_D0+4]
0x962FA0: mov     edx, dword ptr [esp+158h+var_D0+4]
0x962FA7: mov     [esp+158h+var_8], edx
0x962FAE: fsub    dword ptr [ecx+0Ch]
0x962FB1: fstp    [esp+158h+var_C8]
0x962FB8: mov     eax, [esp+158h+var_C8]
0x962FBF: fld     dword ptr [esp+158h+var_128+4]
0x962FC3: mov     [esp+158h+var_4], eax
0x962FCA: fld     dword ptr [ecx+10h]
0x962FCD: fld     dword ptr [esp+158h+var_128]
0x962FD1: fld     [esp+158h+var_120]
0x962FD5: fld     dword ptr [ecx+14h]
0x962FD8: fmul    st, st(4)
0x962FDA: fld     st(2)
0x962FDC: fmul    st, st(4)
0x962FDE: faddp   st(1), st
0x962FE0: fld     dword ptr [ecx+18h]
0x962FE3: fmul    st, st(2)
0x962FE5: faddp   st(1), st
0x962FE7: fstp    [esp+158h+var_12C]
0x962FEB: fld     dword ptr [esi+4]
0x962FEE: fmul    st, st(4)
0x962FF0: fld     dword ptr [esi]
0x962FF2: fmul    st, st(3)
0x962FF4: faddp   st(1), st
0x962FF6: fld     dword ptr [esi+8]
0x962FF9: fmul    st, st(2)
0x962FFB: faddp   st(1), st
0x962FFD: fstp    [esp+158h+var_130]
0x963001: fld     dword ptr [edi+4]
0x963004: fmul    st, st(4)
0x963006: fld     dword ptr [edi]
0x963008: fmul    st, st(3)
0x96300A: faddp   st(1), st
0x96300C: fld     dword ptr [edi+8]
0x96300F: fmul    st, st(2)
0x963011: faddp   st(1), st
0x963013: fstp    [esp+158h+var_114]
0x963017: fld     dword ptr [ecx+38h]
0x96301A: fst     [esp+158h+var_60]
0x963021: fld     [esp+158h+var_130]
0x963025: fst     [esp+158h+var_100]
0x963029: fld     dword ptr [ecx+34h]
0x96302C: fst     [esp+158h+var_58]
0x963033: fld     [esp+158h+var_12C]
0x963037: fstp    [esp+158h+var_128]
0x96303B: fld     dword ptr [ecx+3Ch]
0x96303E: fstp    [esp+158h+var_98]
0x963045: fld     [esp+158h+var_114]
0x963049: fstp    [esp+158h+var_E0]
0x96304D: fld     [esp+158h+var_128]
0x963051: fmul    st, st(1)
0x963053: fstp    [esp+158h+var_14C]
0x963057: fld     [esp+158h+var_14C]
0x96305B: fabs
0x96305D: fstp    [esp+158h+var_14C]
0x963061: fld     [esp+158h+var_14C]
0x963065: fxch    st(2)
0x963067: fmulp   st(3), st
0x963069: fxch    st(2)
0x96306B: fstp    [esp+158h+var_14C]
0x96306F: fld     [esp+158h+var_14C]
0x963073: fxch    st(1)
0x963075: fstp    [esp+158h+var_50]
0x96307C: fabs
0x96307E: fstp    [esp+158h+var_14C]
0x963082: fld     [esp+158h+var_14C]
0x963086: fadd    [esp+158h+var_50]
0x96308D: fld     [esp+158h+var_E0]
0x963091: fmul    [esp+158h+var_98]
0x963098: fstp    [esp+158h+var_14C]
0x96309C: fld     [esp+158h+var_14C]
0x9630A0: fabs
0x9630A2: fstp    [esp+158h+var_14C]
0x9630A6: fadd    [esp+158h+var_14C]
0x9630AA: fstp    [esp+158h+var_148]
0x9630AE: fld     dword ptr [esp+158h+var_D0+4]
0x9630B5: fst     [esp+158h+var_A0]
0x9630BC: fld     dword ptr [esp+158h+var_D0]
0x9630C3: fst     [esp+158h+var_B0]
0x9630CA: fld     [esp+158h+var_C8]
0x9630D1: fst     [esp+158h+var_B8]
0x9630D8: fxch    st(1)
0x9630DA: fmul    st, st(5)
0x9630DC: fxch    st(2)
0x9630DE: fmul    st, st(7)
0x9630E0: faddp   st(2), st
0x9630E2: fmul    st, st(3)
0x9630E4: faddp   st(1), st
0x9630E6: fstp    [esp+158h+var_14C]
0x9630EA: fld     [esp+158h+var_14C]
0x9630EE: fld     [esp+158h+var_148]
0x9630F2: fcom    st(1)
0x9630F4: fnstsw  ax
0x9630F6: fld     [esp+158h+var_70]
0x9630FD: test    ah, 5
0x963100: jp      short loc_963146
0x963102: fmulp   st(7), st
0x963104: fld     [esp+158h+var_74]
0x96310B: fmulp   st(5), st
0x96310D: fxch    st(6)
0x96310F: faddp   st(4), st
0x963111: fld     [esp+158h+var_6C]
0x963118: fmulp   st(3), st
0x96311A: fxch    st(3)
0x96311C: faddp   st(2), st
0x96311E: fxch    st(1)
0x963120: fstp    [esp+158h+var_14C]
0x963124: fld     [esp+158h+var_14C]
0x963128: fmul    [ebp+arg_0]
0x96312B: faddp   st(2), st
0x96312D: fxch    st(1)
0x96312F: fcomp   st(3)
0x963131: fnstsw  ax
0x963133: fstp    st(2)
0x963135: test    ah, 41h
0x963138: jnz     short loc_9631A3
0x96313A: fstp    st
0x96313C: xor     al, al
0x96313E: fstp    st
0x963140: pop     edi
0x963141: pop     esi
0x963142: mov     esp, ebp
0x963144: pop     ebp
0x963145: retn
0x963146: fstp    st(1)
0x963148: fld     [esp+158h+var_148]
0x96314C: fchs
0x96314E: fst     [esp+158h+var_110]
0x963152: fcomp   st(2)
0x963154: fnstsw  ax
0x963156: test    ah, 41h
0x963159: jnz     short loc_9631AC
0x96315B: fld     st
0x96315D: fmulp   st(7), st
0x96315F: fld     [esp+158h+var_74]
0x963166: fmulp   st(5), st
0x963168: fxch    st(6)
0x96316A: faddp   st(4), st
0x96316C: fld     [esp+158h+var_6C]
0x963173: fmulp   st(3), st
0x963175: fxch    st(3)
0x963177: faddp   st(2), st
0x963179: fxch    st(1)
0x96317B: fstp    [esp+158h+var_14C]
0x96317F: fld     [esp+158h+var_14C]
0x963183: fmul    [ebp+arg_0]
0x963186: faddp   st(2), st
0x963188: fxch    st(1)
0x96318A: fcomp   [esp+158h+var_110]
0x96318E: fnstsw  ax
0x963190: test    ah, 5
0x963193: jp      short loc_9631B4
0x963195: fstp    st(1)
0x963197: xor     al, al
0x963199: fstp    st
0x96319B: fstp    st
0x96319D: pop     edi
0x96319E: pop     esi
0x96319F: mov     esp, ebp
0x9631A1: pop     ebp
0x9631A2: retn
0x9631A3: fld     [esp+158h+var_70]
0x9631AA: jmp     short loc_9631B6
0x9631AC: fstp    st(1)
0x9631AE: fstp    st(5)
0x9631B0: fstp    st(2)
0x9631B2: fstp    st
0x9631B4: fxch    st(2)
0x9631B6: fld     dword ptr [ecx+14h]
0x9631B9: fld     dword ptr [ecx+18h]
0x9631BC: fld     [esp+158h+var_A0]
0x9631C3: fmul    st, st(2)
0x9631C5: fld     [esp+158h+var_B0]
0x9631CC: fmul    st, st(5)
0x9631CE: faddp   st(1), st
0x9631D0: fld     [esp+158h+var_B8]
0x9631D7: fmul    st, st(2)
0x9631D9: faddp   st(1), st
0x9631DB: fstp    [esp+158h+var_13C]
0x9631DF: fld     [esp+158h+var_F0]
0x9631E3: fmul    st, st(2)
0x9631E5: fld     [esp+158h+var_C0]
0x9631EC: fmul    st, st(5)
0x9631EE: faddp   st(1), st
0x9631F0: fld     [esp+158h+var_A8]
0x9631F7: fmul    st, st(2)
0x9631F9: faddp   st(1), st
0x9631FB: fstp    [esp+158h+var_144]
0x9631FF: fld     [esp+158h+var_38]
0x963206: fmul    st, st(2)
0x963208: fld     [esp+158h+var_80]
0x96320F: fmul    st, st(5)
0x963211: faddp   st(1), st
0x963213: fld     [esp+158h+var_88]
0x96321A: fmul    st, st(2)
0x96321C: faddp   st(1), st
0x96321E: fstp    [esp+158h+var_14C]
0x963222: fxch    st(2)
0x963224: fst     [esp+158h+var_50]
0x96322B: fld     [esp+158h+var_74]
0x963232: fst     [esp+158h+var_68]
0x963239: fld     [esp+158h+var_6C]
0x963240: fst     [esp+158h+var_D0]
0x963247: fxch    st(1)
0x963249: fmul    st, st(5)
0x96324B: fxch    st(3)
0x96324D: fmul    st, st(2)
0x96324F: faddp   st(3), st
0x963251: fmulp   st(3), st
0x963253: fxch    st(1)
0x963255: faddp   st(2), st
0x963257: fxch    st(1)
0x963259: fstp    [esp+158h+var_148]
0x96325D: fld     [esp+158h+var_13C]
0x963261: fcom    st(3)
0x963263: fnstsw  ax
0x963265: fld     [esp+158h+var_144]
0x963269: test    ah, 41h
0x96326C: fld     [esp+158h+var_14C]
0x963270: fldz
0x963272: jnz     loc_96331E
0x963278: fcom    st(2)
0x96327A: fnstsw  ax
0x96327C: test    ah, 5
0x96327F: jp      loc_963307
0x963285: fstp    st(2)
0x963287: fcom    st(1)
0x963289: fnstsw  ax
0x96328B: fstp    st(1)
0x96328D: test    ah, 1
0x963290: jnz     short loc_9632C2
0x963292: fstp    st
0x963294: fld     [esp+158h+var_148]
0x963298: fld     [ebp+arg_0]
0x96329B: fld     st
0x96329D: fmulp   st(2), st
0x96329F: fxch    st(1)
0x9632A1: faddp   st(2), st
0x9632A3: fxch    st(1)
0x9632A5: fcomp   st(4)
0x9632A7: fnstsw  ax
0x9632A9: fstp    st(3)
0x9632AB: test    ah, 41h
0x9632AE: jnz     loc_9633DF
0x9632B4: fstp    st(1)
0x9632B6: xor     al, al
0x9632B8: fstp    st(1)
0x9632BA: fstp    st
0x9632BC: pop     edi
0x9632BD: pop     esi
0x9632BE: mov     esp, ebp
0x9632C0: pop     ebp
0x9632C1: retn
0x9632C2: faddp   st(1), st
0x9632C4: fstp    [esp+158h+var_140]
0x9632C8: fld     [esp+158h+var_140]
0x9632CC: fcom    st(3)
0x9632CE: fnstsw  ax
0x9632D0: test    ah, 41h
0x9632D3: jnz     loc_9633D6
0x9632D9: fld     [esp+158h+var_148]
0x9632DD: fld     [ebp+arg_0]
0x9632E0: fld     st
0x9632E2: fmulp   st(2), st
0x9632E4: fxch    st(1)
0x9632E6: faddp   st(2), st
0x9632E8: fxch    st(1)
0x9632EA: fcomp   st(4)
0x9632EC: fnstsw  ax
0x9632EE: fstp    st(3)
0x9632F0: test    ah, 41h
0x9632F3: jnz     loc_9633DF
0x9632F9: fstp    st(1)
0x9632FB: xor     al, al
0x9632FD: fstp    st(1)
0x9632FF: fstp    st
0x963301: pop     edi
0x963302: pop     esi
0x963303: mov     esp, ebp
0x963305: pop     ebp
0x963306: retn
0x963307: fstp    st
0x963309: fcom    st(1)
0x96330B: fnstsw  ax
0x96330D: test    ah, 41h
0x963310: jp      short loc_963318
0x963312: fstp    st(1)
0x963314: faddp   st(1), st
0x963316: jmp     short loc_9632C4
0x963318: fstp    st
0x96331A: faddp   st(1), st
0x96331C: jmp     short loc_9632C4
0x96331E: fstp    st(6)
0x963320: fld     dword ptr [ecx+34h]
0x963323: fchs
0x963325: fcom    st(3)
0x963327: fnstsw  ax
0x963329: test    ah, 41h
0x96332C: jnz     loc_9633D0
0x963332: fxch    st(2)
0x963334: fcom    st(6)
0x963336: fnstsw  ax
0x963338: test    ah, 41h
0x96333B: jp      short loc_9633B5
0x96333D: fstp    st
0x96333F: fcom    st(5)
0x963341: fnstsw  ax
0x963343: fstp    st(5)
0x963345: test    ah, 41h
0x963348: jp      short loc_963376
0x96334A: fstp    st(4)
0x96334C: fld     [esp+158h+var_148]
0x963350: fld     [ebp+arg_0]
0x963353: fld     st
0x963355: fmulp   st(2), st
0x963357: fxch    st(1)
0x963359: faddp   st(2), st
0x96335B: fxch    st(1)
0x96335D: fcomp   st(4)
0x96335F: fnstsw  ax
0x963361: fstp    st(3)
0x963363: test    ah, 5
0x963366: jp      short loc_9633DF
0x963368: fstp    st(1)
0x96336A: xor     al, al
0x96336C: fstp    st(1)
0x96336E: fstp    st
0x963370: pop     edi
0x963371: pop     esi
0x963372: mov     esp, ebp
0x963374: pop     ebp
0x963375: retn
0x963376: fxch    st(4)
0x963378: faddp   st(1), st
0x96337A: fstp    [esp+158h+var_140]
0x96337E: fld     [esp+158h+var_140]
0x963382: fcom    st(3)
0x963384: fnstsw  ax
0x963386: test    ah, 5
0x963389: jp      short loc_9633D6
0x96338B: fld     [esp+158h+var_148]
0x96338F: fld     [ebp+arg_0]
0x963392: fld     st
0x963394: fmulp   st(2), st
0x963396: fxch    st(1)
0x963398: faddp   st(2), st
0x96339A: fxch    st(1)
0x96339C: fcomp   st(4)
0x96339E: fnstsw  ax
0x9633A0: fstp    st(3)
0x9633A2: test    ah, 5
0x9633A5: jp      short loc_9633DF
0x9633A7: fstp    st(1)
0x9633A9: xor     al, al
0x9633AB: fstp    st(1)
0x9633AD: fstp    st
0x9633AF: pop     edi
0x9633B0: pop     esi
0x9633B1: mov     esp, ebp
0x9633B3: pop     ebp
0x9633B4: retn
0x9633B5: fstp    st(6)
0x9633B7: fcom    st(5)
0x9633B9: fnstsw  ax
0x9633BB: test    ah, 1
0x9633BE: jnz     short loc_9633C8
0x9633C0: fstp    st(5)
0x9633C2: fxch    st(4)
0x9633C4: faddp   st(1), st
0x9633C6: jmp     short loc_96337A
0x9633C8: fstp    st
0x9633CA: fxch    st(4)
0x9633CC: faddp   st(1), st
0x9633CE: jmp     short loc_96337A
0x9633D0: fstp    st(3)
0x9633D2: fstp    st(2)
0x9633D4: fstp    st(1)
0x9633D6: fstp    st
0x9633D8: fstp    st(2)
0x9633DA: fld     [ebp+arg_0]
0x9633DD: fxch    st(2)
0x9633DF: fld     dword ptr [esi+4]
0x9633E2: fmul    [esp+158h+var_A0]
0x9633E9: fld     dword ptr [esi]
0x9633EB: fmul    [esp+158h+var_B0]
0x9633F2: faddp   st(1), st
0x9633F4: fld     dword ptr [esi+8]
0x9633F7: fmul    [esp+158h+var_B8]
0x9633FE: faddp   st(1), st
0x963400: fstp    dword ptr [esp+158h+var_110]
0x963404: fld     dword ptr [esi+4]
0x963407: fmul    [esp+158h+var_F0]
0x96340B: fld     dword ptr [esi]
0x96340D: fmul    [esp+158h+var_C0]
0x963414: faddp   st(1), st
0x963416: fld     dword ptr [esi+8]
0x963419: fmul    [esp+158h+var_A8]
0x963420: faddp   st(1), st
0x963422: fstp    [esp+158h+var_134]
0x963426: fld     dword ptr [esi+4]
0x963429: fmul    [esp+158h+var_38]
0x963430: fld     dword ptr [esi]
0x963432: fmul    [esp+158h+var_80]
0x963439: faddp   st(1), st
0x96343B: fld     dword ptr [esi+8]
0x96343E: fmul    [esp+158h+var_88]
0x963445: faddp   st(1), st
0x963447: fstp    [esp+158h+var_13C]
0x96344B: fld     dword ptr [esi+4]
0x96344E: fmul    st, st(1)
0x963450: fld     dword ptr [esi]
0x963452: fmul    [esp+158h+var_68]
0x963459: faddp   st(1), st
0x96345B: fld     dword ptr [esi+8]
0x96345E: fmul    [esp+158h+var_D0]
0x963465: faddp   st(1), st
0x963467: fstp    [esp+158h+var_148]
0x96346B: fld     dword ptr [esp+158h+var_110]
0x96346F: fld     [esp+158h+var_60]
0x963476: fcom    st(1)
0x963478: fnstsw  ax
0x96347A: fld     [esp+158h+var_134]
0x96347E: test    ah, 5
0x963481: fld     [esp+158h+var_13C]
0x963485: jp      loc_963519
0x96348B: fldz
0x96348D: fcomp   st(2)
0x96348F: fnstsw  ax
0x963491: test    ah, 5
0x963494: jp      short loc_963504
0x963496: fstp    st(1)
0x963498: fldz
0x96349A: fcomp   st(1)
0x96349C: fnstsw  ax
0x96349E: test    ah, 41h
0x9634A1: jp      short loc_9634C8
0x9634A3: fstp    st
0x9634A5: fld     [esp+158h+var_148]
0x9634A9: fmul    st, st(5)
0x9634AB: faddp   st(2), st
0x9634AD: fcompp
0x9634AF: fnstsw  ax
0x9634B1: test    ah, 5
0x9634B4: jp      loc_9635A2
0x9634BA: fstp    st(1)
0x9634BC: xor     al, al
0x9634BE: fstp    st(1)
0x9634C0: fstp    st
0x9634C2: pop     edi
0x9634C3: pop     esi
0x9634C4: mov     esp, ebp
0x9634C6: pop     ebp
0x9634C7: retn
0x9634C8: faddp   st(2), st
0x9634CA: fxch    st(1)
0x9634CC: fstp    [esp+158h+var_140]
0x9634D0: fld     [esp+158h+var_140]
0x9634D4: fcom    st(1)
0x9634D6: fnstsw  ax
0x9634D8: test    ah, 41h
0x9634DB: jnz     loc_96359E
0x9634E1: fld     [esp+158h+var_148]
0x9634E5: fmul    st, st(5)
0x9634E7: faddp   st(1), st
0x9634E9: fcompp
0x9634EB: fnstsw  ax
0x9634ED: test    ah, 41h
0x9634F0: jnz     loc_9635A2
0x9634F6: fstp    st(1)
0x9634F8: xor     al, al
0x9634FA: fstp    st(1)
0x9634FC: fstp    st
0x9634FE: pop     edi
0x9634FF: pop     esi
0x963500: mov     esp, ebp
0x963502: pop     ebp
0x963503: retn
0x963504: fcom    st(1)
0x963506: fnstsw  ax
0x963508: test    ah, 41h
0x96350B: jp      short loc_963513
0x96350D: fstp    st(1)
0x96350F: faddp   st(2), st
0x963511: jmp     short loc_9634CA
0x963513: fstp    st
0x963515: faddp   st(2), st
0x963517: jmp     short loc_9634CA
0x963519: fstp    st(2)
0x96351B: fld     dword ptr [ecx+38h]
0x96351E: fchs
0x963520: fcom    st(3)
0x963522: fnstsw  ax
0x963524: test    ah, 41h
0x963527: jnz     short loc_96359A
0x963529: fldz
0x96352B: fcomp   st(2)
0x96352D: fnstsw  ax
0x96352F: test    ah, 1
0x963532: jnz     short loc_963583
0x963534: fstp    st(1)
0x963536: fldz
0x963538: fcomp   st(2)
0x96353A: fnstsw  ax
0x96353C: test    ah, 1
0x96353F: jnz     short loc_96354D
0x963541: fstp    st(1)
0x963543: fld     [esp+158h+var_148]
0x963547: fmul    st, st(5)
0x963549: faddp   st(2), st
0x96354B: jmp     short loc_9634E9
0x96354D: fxch    st(1)
0x96354F: faddp   st(2), st
0x963551: fxch    st(1)
0x963553: fstp    [esp+158h+var_140]
0x963557: fld     [esp+158h+var_140]
0x96355B: fcom    st(1)
0x96355D: fnstsw  ax
0x96355F: test    ah, 5
0x963562: jp      short loc_96359E
0x963564: fld     [esp+158h+var_148]
0x963568: fmul    st, st(5)
0x96356A: faddp   st(1), st
0x96356C: fcompp
0x96356E: fnstsw  ax
0x963570: test    ah, 5
0x963573: jp      short loc_9635A2
0x963575: fstp    st(1)
0x963577: xor     al, al
0x963579: fstp    st(1)
0x96357B: fstp    st
0x96357D: pop     edi
0x96357E: pop     esi
0x96357F: mov     esp, ebp
0x963581: pop     ebp
0x963582: retn
0x963583: fxch    st(2)
0x963585: fcom    st(1)
0x963587: fnstsw  ax
0x963589: test    ah, 1
0x96358C: jnz     short loc_963594
0x96358E: fstp    st(1)
0x963590: faddp   st(2), st
0x963592: jmp     short loc_963551
0x963594: fstp    st
0x963596: faddp   st(2), st
0x963598: jmp     short loc_963551
0x96359A: fstp    st(3)
0x96359C: fstp    st(2)
0x96359E: fstp    st
0x9635A0: fstp    st
0x9635A2: fld     dword ptr [edi+4]
0x9635A5: fmul    [esp+158h+var_A0]
0x9635AC: fld     dword ptr [edi]
0x9635AE: fmul    [esp+158h+var_B0]
0x9635B5: faddp   st(1), st
0x9635B7: fld     dword ptr [edi+8]
0x9635BA: fmul    [esp+158h+var_B8]
0x9635C1: faddp   st(1), st
0x9635C3: fstp    [esp+158h+var_138]
0x9635C7: fld     dword ptr [edi+4]
0x9635CA: fmul    [esp+158h+var_F0]
0x9635CE: fld     dword ptr [edi]
0x9635D0: fmul    [esp+158h+var_C0]
0x9635D7: faddp   st(1), st
0x9635D9: fld     dword ptr [edi+8]
0x9635DC: fmul    [esp+158h+var_A8]
0x9635E3: faddp   st(1), st
0x9635E5: fstp    [esp+158h+var_3C]
0x9635EC: fld     dword ptr [edi+4]
0x9635EF: fmul    [esp+158h+var_38]
0x9635F6: fld     dword ptr [edi]
0x9635F8: fmul    [esp+158h+var_80]
0x9635FF: faddp   st(1), st
0x963601: fld     dword ptr [edi+8]
0x963604: fmul    [esp+158h+var_88]
0x96360B: faddp   st(1), st
0x96360D: fstp    dword ptr [esp+158h+var_110]
0x963611: fmul    dword ptr [edi+4]
0x963614: fld     dword ptr [edi]
0x963616: fmul    [esp+158h+var_68]
0x96361D: faddp   st(1), st
0x96361F: fld     dword ptr [edi+8]
0x963622: fmul    [esp+158h+var_D0]
0x963629: faddp   st(1), st
0x96362B: fstp    [esp+158h+var_148]
0x96362F: fld     [esp+158h+var_138]
0x963633: fld     [esp+158h+var_98]
0x96363A: fcom    st(1)
0x96363C: fnstsw  ax
0x96363E: fld     [esp+158h+var_3C]
0x963645: test    ah, 5
0x963648: fld     dword ptr [esp+158h+var_110]
0x96364C: jp      loc_9636E4
0x963652: fldz
0x963654: fcom    st(2)
0x963656: fnstsw  ax
0x963658: test    ah, 5
0x96365B: jp      short loc_9636CD
0x96365D: fstp    st(2)
0x96365F: fcom    st(1)
0x963661: fnstsw  ax
0x963663: fstp    st(1)
0x963665: test    ah, 1
0x963668: jnz     short loc_963691
0x96366A: fstp    st
0x96366C: fld     [esp+158h+var_148]
0x963670: fmul    st, st(4)
0x963672: faddp   st(2), st
0x963674: fcom    st(1)
0x963676: fnstsw  ax
0x963678: fstp    st(1)
0x96367A: test    ah, 5
0x96367D: jp      loc_96376B
0x963683: fstp    st
0x963685: xor     al, al
0x963687: fstp    st
0x963689: fstp    st
0x96368B: pop     edi
0x96368C: pop     esi
0x96368D: mov     esp, ebp
0x96368F: pop     ebp
0x963690: retn
0x963691: faddp   st(2), st
0x963693: fxch    st(1)
0x963695: fstp    [esp+158h+var_140]
0x963699: fld     [esp+158h+var_140]
0x96369D: fcom    st(1)
0x96369F: fnstsw  ax
0x9636A1: test    ah, 41h
0x9636A4: jnz     loc_96375B
0x9636AA: fld     [esp+158h+var_148]
0x9636AE: fmul    st, st(4)
0x9636B0: faddp   st(1), st
0x9636B2: fcomp   st(1)
0x9636B4: fnstsw  ax
0x9636B6: test    ah, 41h
0x9636B9: jnz     loc_96376B
0x9636BF: fstp    st
0x9636C1: xor     al, al
0x9636C3: fstp    st
0x9636C5: fstp    st
0x9636C7: pop     edi
0x9636C8: pop     esi
0x9636C9: mov     esp, ebp
0x9636CB: pop     ebp
0x9636CC: retn
0x9636CD: fstp    st
0x9636CF: fcom    st(1)
0x9636D1: fnstsw  ax
0x9636D3: test    ah, 41h
0x9636D6: jp      short loc_9636DE
0x9636D8: fstp    st(1)
0x9636DA: faddp   st(2), st
0x9636DC: jmp     short loc_963693
0x9636DE: fstp    st
0x9636E0: faddp   st(2), st
0x9636E2: jmp     short loc_963693
0x9636E4: fld     dword ptr [ecx+3Ch]
0x9636E7: fchs
0x9636E9: fcom    st(4)
0x9636EB: fnstsw  ax
0x9636ED: test    ah, 41h
0x9636F0: jnz     short loc_96375F
0x9636F2: fldz
0x9636F4: fcomp   st(3)
0x9636F6: fnstsw  ax
0x9636F8: test    ah, 1
0x9636FB: jnz     short loc_963740
0x9636FD: fstp    st(2)
0x9636FF: fldz
0x963701: fcomp   st(1)
0x963703: fnstsw  ax
0x963705: test    ah, 1
0x963708: jnz     short loc_96371C
0x96370A: fstp    st
0x96370C: fld     [esp+158h+var_148]
0x963710: fmul    st, st(5)
0x963712: faddp   st(3), st
0x963714: fcomp   st(2)
0x963716: fnstsw  ax
0x963718: fstp    st(1)
0x96371A: jmp     short loc_9636B6
0x96371C: faddp   st(3), st
0x96371E: fxch    st(2)
0x963720: fstp    [esp+158h+var_140]
0x963724: fld     [esp+158h+var_140]
0x963728: fcom    st(2)
0x96372A: fnstsw  ax
0x96372C: test    ah, 5
0x96372F: jp      short loc_963767
0x963731: fld     [esp+158h+var_148]
0x963735: fmul    st, st(5)
0x963737: faddp   st(1), st
0x963739: fcomp   st(2)
0x96373B: jmp     loc_963676
0x963740: fxch    st(1)
0x963742: fcom    st(2)
0x963744: fnstsw  ax
0x963746: test    ah, 1
0x963749: jnz     short loc_963753
0x96374B: fstp    st(2)
0x96374D: fxch    st(1)
0x96374F: faddp   st(3), st
0x963751: jmp     short loc_96371E
0x963753: fstp    st
0x963755: fxch    st(1)
0x963757: faddp   st(3), st
0x963759: jmp     short loc_96371E
0x96375B: fstp    st
0x96375D: jmp     short loc_96376B
0x96375F: fstp    st(4)
0x963761: fstp    st(3)
0x963763: fstp    st(2)
0x963765: jmp     short loc_963769
0x963767: fstp    st
0x963769: fstp    st(1)
0x96376B: fld     dword ptr [ecx+14h]
0x96376E: fld     dword ptr [ecx+18h]
0x963771: fld     [esp+158h+var_A8]
0x963778: fmul    st, st(2)
0x96377A: fld     [esp+158h+var_F0]
0x96377E: fld     st
0x963780: fmul    st, st(3)
0x963782: fsubp   st(2), st
0x963784: fxch    st(1)
0x963786: fstp    dword ptr [esp+158h+var_F0]
0x96378A: fld     [esp+158h+var_C0]
0x963791: fld     st
0x963793: fmulp   st(3), st
0x963795: fld     [esp+158h+var_A8]
0x96379C: fmul    st, st(6)
0x96379E: fsubp   st(3), st
0x9637A0: fxch    st(2)
0x9637A2: fstp    dword ptr [esp+158h+var_F0+4]
0x9637A6: fmul    st, st(4)
0x9637A8: fxch    st(1)
0x9637AA: fmulp   st(2), st
0x9637AC: fsubrp  st(1), st
0x9637AE: fstp    [esp+158h+var_E8]
0x9637B2: fld     dword ptr [esp+158h+var_F0]
0x9637B6: fld     dword ptr [esp+158h+var_F0+4]
0x9637BA: fld     [esp+158h+var_E8]
0x9637BE: fld     [esp+158h+var_A0]
0x9637C5: fmul    st, st(2)
0x9637C7: fld     [esp+158h+var_B0]
0x9637CE: fmul    st, st(4)
0x9637D0: faddp   st(1), st
0x9637D2: fld     [esp+158h+var_B8]
0x9637D9: fmul    st, st(2)
0x9637DB: faddp   st(1), st
0x9637DD: fstp    [esp+158h+var_140]
0x9637E1: fld     [esp+158h+var_50]
0x9637E8: fmulp   st(2), st
0x9637EA: fld     [esp+158h+var_68]
0x9637F1: fmulp   st(3), st
0x9637F3: fxch    st(1)
0x9637F5: faddp   st(2), st
0x9637F7: fmul    [esp+158h+var_D0]
0x9637FE: faddp   st(1), st
0x963800: fstp    [esp+158h+var_138]
0x963804: fld     [esp+158h+var_3C]
0x96380B: fst     [esp+158h+var_F0]
0x96380F: fld     [esp+158h+var_134]
0x963813: fst     [esp+158h+var_C0]
0x96381A: fld     [esp+158h+var_60]
0x963821: fmul    st, st(2)
0x963823: fstp    [esp+158h+var_134]
0x963827: fld     [esp+158h+var_134]
0x96382B: fabs
0x96382D: fstp    [esp+158h+var_134]
0x963831: fld     [esp+158h+var_134]
0x963835: fxch    st(1)
0x963837: fmul    st, st(3)
0x963839: fstp    [esp+158h+var_134]
0x96383D: fld     [esp+158h+var_134]
0x963841: fabs
0x963843: fstp    [esp+158h+var_134]
0x963847: fadd    [esp+158h+var_134]
0x96384B: fstp    [esp+158h+var_148]
0x96384F: fld     [esp+158h+var_140]
0x963853: fld     [esp+158h+var_148]
0x963857: fld     st
0x963859: fcom    st(2)
0x96385B: fnstsw  ax
0x96385D: fld     [esp+158h+var_138]
0x963861: test    ah, 5
0x963864: jp      short loc_9638D8
0x963866: fstp    st(2)
0x963868: fldz
0x96386A: fcomp   [esp+158h+var_12C]
0x96386E: fnstsw  ax
0x963870: test    ah, 41h
0x963873: jp      short loc_96389C
0x963875: fxch    st(1)
0x963877: fmulp   st(6), st
0x963879: fxch    st(5)
0x96387B: fadd    st, st(1)
0x96387D: fcomp   st(5)
0x96387F: fnstsw  ax
0x963881: fstp    st(4)
0x963883: test    ah, 41h
0x963886: jnz     loc_96392E
0x96388C: fstp    st(1)
0x96388E: xor     al, al
0x963890: fstp    st(1)
0x963892: fstp    st(1)
0x963894: fstp    st
0x963896: pop     edi
0x963897: pop     esi
0x963898: mov     esp, ebp
0x96389A: pop     ebp
0x96389B: retn
0x96389C: fstp    st(1)
0x96389E: fld     [esp+158h+var_128]
0x9638A2: fadd    st, st(2)
0x9638A4: fstp    [esp+158h+var_134]
0x9638A8: fld     [esp+158h+var_134]
0x9638AC: fcom    st(1)
0x9638AE: fnstsw  ax
0x9638B0: test    ah, 41h
0x9638B3: jnz     short loc_963928
0x9638B5: fld     [esp+158h+var_138]
0x9638B9: fmulp   st(7), st
0x9638BB: faddp   st(6), st
0x9638BD: fcomp   st(5)
0x9638BF: fnstsw  ax
0x9638C1: fstp    st(4)
0x9638C3: test    ah, 5
0x9638C6: jp      short loc_96392E
0x9638C8: fstp    st(1)
0x9638CA: xor     al, al
0x9638CC: fstp    st(1)
0x9638CE: fstp    st(1)
0x9638D0: fstp    st
0x9638D2: pop     edi
0x9638D3: pop     esi
0x9638D4: mov     esp, ebp
0x9638D6: pop     ebp
0x9638D7: retn
0x9638D8: fstp    st(1)
0x9638DA: fxch    st(1)
0x9638DC: fchs
0x9638DE: fcom    st(2)
0x9638E0: fnstsw  ax
0x9638E2: test    ah, 41h
0x9638E5: jnz     short loc_963924
0x9638E7: fldz
0x9638E9: fcomp   [esp+158h+var_12C]
0x9638ED: fnstsw  ax
0x9638EF: test    ah, 1
0x9638F2: jnz     short loc_9638FE
0x9638F4: fxch    st(1)
0x9638F6: fmulp   st(6), st
0x9638F8: fxch    st(5)
0x9638FA: fadd    st, st(1)
0x9638FC: jmp     short loc_9638BD
0x9638FE: fstp    st(1)
0x963900: fld     [esp+158h+var_128]
0x963904: fadd    st, st(2)
0x963906: fstp    [esp+158h+var_134]
0x96390A: fld     [esp+158h+var_134]
0x96390E: fcom    st(1)
0x963910: fnstsw  ax
0x963912: test    ah, 5
0x963915: jp      short loc_963928
0x963917: fld     [esp+158h+var_138]
0x96391B: fmulp   st(7), st
0x96391D: faddp   st(6), st
0x96391F: jmp     loc_96387D
0x963924: fstp    st
0x963926: jmp     short loc_96392A
0x963928: fstp    st(1)
0x96392A: fstp    st
0x96392C: fstp    st(4)
0x96392E: fld     dword ptr [ecx+14h]
0x963931: fld     dword ptr [ecx+18h]
0x963934: fld     [esp+158h+var_88]
0x96393B: fmul    st, st(2)
0x96393D: fld     [esp+158h+var_38]
0x963944: fmul    st, st(2)
0x963946: fsubp   st(1), st
0x963948: fstp    dword ptr [esp+158h+var_128]
0x96394C: fld     [esp+158h+var_80]
0x963953: fld     st
0x963955: fmulp   st(2), st
0x963957: fld     [esp+158h+var_88]
0x96395E: fmul    st, st(6)
0x963960: fsubp   st(2), st
0x963962: fxch    st(1)
0x963964: fstp    dword ptr [esp+158h+var_128+4]
0x963968: fld     [esp+158h+var_38]
0x96396F: fmulp   st(5), st
0x963971: fmulp   st(1), st
0x963973: fsubp   st(3), st
0x963975: fxch    st(2)
0x963977: fstp    [esp+158h+var_120]
0x96397B: fld     dword ptr [esp+158h+var_128]
0x96397F: fld     dword ptr [esp+158h+var_128+4]
0x963983: fld     [esp+158h+var_120]
0x963987: fld     [esp+158h+var_A0]
0x96398E: fmul    st, st(2)
0x963990: fld     [esp+158h+var_B0]
0x963997: fmul    st, st(4)
0x963999: faddp   st(1), st
0x96399B: fld     [esp+158h+var_B8]
0x9639A2: fmul    st, st(2)
0x9639A4: faddp   st(1), st
0x9639A6: fstp    [esp+158h+var_134]
0x9639AA: fld     [esp+158h+var_50]
0x9639B1: fmulp   st(2), st
0x9639B3: fld     [esp+158h+var_68]
0x9639BA: fmulp   st(3), st
0x9639BC: fxch    st(1)
0x9639BE: faddp   st(2), st
0x9639C0: fmul    [esp+158h+var_D0]
0x9639C7: faddp   st(1), st
0x9639C9: fstp    [esp+158h+var_140]
0x9639CD: fld     dword ptr [esp+158h+var_110]
0x9639D1: fst     [esp+158h+var_38]
0x9639D8: fld     [esp+158h+var_13C]
0x9639DC: fst     [esp+158h+var_80]
0x9639E3: fld     [esp+158h+var_60]
0x9639EA: fmul    st, st(2)
0x9639EC: fstp    [esp+158h+var_13C]
0x9639F0: fld     [esp+158h+var_13C]
0x9639F4: fabs
0x9639F6: fstp    [esp+158h+var_13C]
0x9639FA: fld     [esp+158h+var_13C]
0x9639FE: fld     st(1)
0x963A00: fmul    st, st(4)
0x963A02: fstp    [esp+158h+var_13C]
0x963A06: fld     [esp+158h+var_13C]
0x963A0A: fabs
0x963A0C: fstp    [esp+158h+var_13C]
0x963A10: fadd    [esp+158h+var_13C]
0x963A14: fstp    [esp+158h+var_148]
0x963A18: fld     [esp+158h+var_134]
0x963A1C: fld     [esp+158h+var_148]
0x963A20: fcom    st(1)
0x963A22: fnstsw  ax
0x963A24: test    ah, 5
0x963A27: jp      short loc_963A9A
0x963A29: fstp    st(5)
0x963A2B: fld     [esp+158h+var_12C]
0x963A2F: fchs
0x963A31: fstp    [esp+158h+var_148]
0x963A35: fldz
0x963A37: fld     [esp+158h+var_148]
0x963A3B: fcom    st(1)
0x963A3D: fnstsw  ax
0x963A3F: fstp    st(1)
0x963A41: test    ah, 1
0x963A44: jnz     short loc_963A72
0x963A46: fstp    st
0x963A48: fld     [esp+158h+var_140]
0x963A4C: fmul    [ebp+arg_0]
0x963A4F: fadd    st, st(1)
0x963A51: fcomp   st(5)
0x963A53: fnstsw  ax
0x963A55: fstp    st(4)
0x963A57: test    ah, 41h
0x963A5A: jnz     loc_963B3D
0x963A60: fstp    st(3)
0x963A62: xor     al, al
0x963A64: fstp    st
0x963A66: fstp    st
0x963A68: fstp    st
0x963A6A: fstp    st
0x963A6C: pop     edi
0x963A6D: pop     esi
0x963A6E: mov     esp, ebp
0x963A70: pop     ebp
0x963A71: retn
0x963A72: fadd    st, st(1)
0x963A74: fstp    [esp+158h+var_13C]
0x963A78: fld     [esp+158h+var_13C]
0x963A7C: fst     [esp+158h+var_128]
0x963A80: fcomp   st(5)
0x963A82: fnstsw  ax
0x963A84: test    ah, 41h
0x963A87: jnz     loc_963B3B
0x963A8D: fld     [esp+158h+var_140]
0x963A91: fmul    [ebp+arg_0]
0x963A94: fadd    [esp+158h+var_128]
0x963A98: jmp     short loc_963A51
0x963A9A: fstp    st
0x963A9C: fld     [esp+158h+var_148]
0x963AA0: fchs
0x963AA2: fst     [esp+158h+var_110]
0x963AA6: fcomp   st(1)
0x963AA8: fnstsw  ax
0x963AAA: test    ah, 41h
0x963AAD: jnz     loc_963B43
0x963AB3: fld     [esp+158h+var_12C]
0x963AB7: fchs
0x963AB9: fstp    [esp+158h+var_148]
0x963ABD: fldz
0x963ABF: fld     [esp+158h+var_148]
0x963AC3: fcom    st(1)
0x963AC5: fnstsw  ax
0x963AC7: fstp    st(1)
0x963AC9: test    ah, 41h
0x963ACC: jp      short loc_963AF8
0x963ACE: fstp    st
0x963AD0: fld     [esp+158h+var_140]
0x963AD4: fmul    [ebp+arg_0]
0x963AD7: fadd    st, st(1)
0x963AD9: fcomp   [esp+158h+var_110]
0x963ADD: fnstsw  ax
0x963ADF: test    ah, 5
0x963AE2: jp      short loc_963B43
0x963AE4: fstp    st
0x963AE6: xor     al, al
0x963AE8: fstp    st(1)
0x963AEA: fstp    st(1)
0x963AEC: fstp    st
0x963AEE: fstp    st(1)
0x963AF0: fstp    st
0x963AF2: pop     edi
0x963AF3: pop     esi
0x963AF4: mov     esp, ebp
0x963AF6: pop     ebp
0x963AF7: retn
0x963AF8: fadd    st, st(1)
0x963AFA: fstp    [esp+158h+var_13C]
0x963AFE: fld     [esp+158h+var_13C]
0x963B02: fst     [esp+158h+var_128]
0x963B06: fcomp   [esp+158h+var_110]
0x963B0A: fnstsw  ax
0x963B0C: test    ah, 5
0x963B0F: jp      short loc_963B43
0x963B11: fld     [esp+158h+var_140]
0x963B15: fmul    [ebp+arg_0]
0x963B18: fadd    [esp+158h+var_128]
0x963B1C: fcomp   [esp+158h+var_110]
0x963B20: fnstsw  ax
0x963B22: test    ah, 5
0x963B25: jp      short loc_963B43
0x963B27: fstp    st
0x963B29: xor     al, al
0x963B2B: fstp    st(1)
0x963B2D: fstp    st(1)
0x963B2F: fstp    st
0x963B31: fstp    st(1)
0x963B33: fstp    st
0x963B35: pop     edi
0x963B36: pop     esi
0x963B37: mov     esp, ebp
0x963B39: pop     ebp
0x963B3A: retn
0x963B3B: fstp    st(4)
0x963B3D: fld     [esp+158h+var_F0]
0x963B41: jmp     short loc_963B45
0x963B43: fxch    st(4)
0x963B45: fxch    st(1)
0x963B47: fsub    [esp+158h+var_C0]
0x963B4E: fstp    dword ptr [esp+158h+var_110]
0x963B52: fsubp   st(1), st
0x963B54: fstp    [esp+158h+var_13C]
0x963B58: fxch    st(1)
0x963B5A: fsubrp  st(2), st
0x963B5C: fxch    st(1)
0x963B5E: fstp    [esp+158h+var_134]
0x963B62: fld     [esp+158h+var_140]
0x963B66: fsub    [esp+158h+var_138]
0x963B6A: fstp    [esp+158h+var_138]
0x963B6E: fld     [esp+158h+var_13C]
0x963B72: fst     [esp+158h+var_88]
0x963B79: fld     dword ptr [esp+158h+var_110]
0x963B7D: fst     [esp+158h+var_A8]
0x963B84: fld     [esp+158h+var_60]
0x963B8B: fmulp   st(2), st
0x963B8D: fxch    st(1)
0x963B8F: fstp    [esp+158h+var_13C]
0x963B93: fld     [esp+158h+var_13C]
0x963B97: fabs
0x963B99: fstp    [esp+158h+var_13C]
0x963B9D: fld     [esp+158h+var_13C]
0x963BA1: fxch    st(2)
0x963BA3: fmulp   st(1), st
0x963BA5: fstp    [esp+158h+var_13C]
0x963BA9: fld     [esp+158h+var_13C]
0x963BAD: fabs
0x963BAF: fstp    [esp+158h+var_13C]
0x963BB3: fadd    [esp+158h+var_13C]
0x963BB7: fstp    [esp+158h+var_148]
0x963BBB: fld     [esp+158h+var_134]
0x963BBF: fld     [esp+158h+var_148]
0x963BC3: fld     st
0x963BC5: fcom    st(2)
0x963BC7: fnstsw  ax
0x963BC9: test    ah, 5
0x963BCC: jp      short loc_963C42
0x963BCE: fstp    st(1)
0x963BD0: fld     [esp+158h+var_12C]
0x963BD4: fchs
0x963BD6: fstp    [esp+158h+var_148]
0x963BDA: fldz
0x963BDC: fld     [esp+158h+var_148]
0x963BE0: fcom    st(1)
0x963BE2: fnstsw  ax
0x963BE4: fstp    st(1)
0x963BE6: test    ah, 1
0x963BE9: jnz     short loc_963C0B
0x963BEB: fstp    st
0x963BED: fld     [esp+158h+var_138]
0x963BF1: fmul    [ebp+arg_0]
0x963BF4: faddp   st(2), st
0x963BF6: fcompp
0x963BF8: fnstsw  ax
0x963BFA: test    ah, 5
0x963BFD: jp      loc_963CBD
0x963C03: xor     al, al
0x963C05: pop     edi
0x963C06: pop     esi
0x963C07: mov     esp, ebp
0x963C09: pop     ebp
0x963C0A: retn
0x963C0B: faddp   st(2), st
0x963C0D: fxch    st(1)
0x963C0F: fstp    [esp+158h+var_13C]
0x963C13: fld     [esp+158h+var_13C]
0x963C17: fcom    st(1)
0x963C19: fnstsw  ax
0x963C1B: test    ah, 41h
0x963C1E: jnz     loc_963CB9
0x963C24: fld     [esp+158h+var_138]
0x963C28: fmul    [ebp+arg_0]
0x963C2B: faddp   st(1), st
0x963C2D: fcompp
0x963C2F: fnstsw  ax
0x963C31: test    ah, 41h
0x963C34: jnz     loc_963CBD
0x963C3A: xor     al, al
0x963C3C: pop     edi
0x963C3D: pop     esi
0x963C3E: mov     esp, ebp
0x963C40: pop     ebp
0x963C41: retn
0x963C42: fstp    st
0x963C44: fchs
0x963C46: fcom    st(1)
0x963C48: fnstsw  ax
0x963C4A: test    ah, 41h
0x963C4D: jnz     short loc_963CB5
0x963C4F: fld     [esp+158h+var_12C]
0x963C53: fchs
0x963C55: fstp    [esp+158h+var_148]
0x963C59: fldz
0x963C5B: fld     [esp+158h+var_148]
0x963C5F: fcom    st(1)
0x963C61: fnstsw  ax
0x963C63: fstp    st(1)
0x963C65: test    ah, 41h
0x963C68: jp      short loc_963C86
0x963C6A: fstp    st
0x963C6C: fld     [esp+158h+var_138]
0x963C70: fmul    [ebp+arg_0]
0x963C73: faddp   st(2), st
0x963C75: fcompp
0x963C77: fnstsw  ax
0x963C79: test    ah, 41h
0x963C7C: jnz     short loc_963CBD
0x963C7E: xor     al, al
0x963C80: pop     edi
0x963C81: pop     esi
0x963C82: mov     esp, ebp
0x963C84: pop     ebp
0x963C85: retn
0x963C86: faddp   st(2), st
0x963C88: fxch    st(1)
0x963C8A: fstp    [esp+158h+var_13C]
0x963C8E: fld     [esp+158h+var_13C]
0x963C92: fcom    st(1)
0x963C94: fnstsw  ax
0x963C96: test    ah, 5
0x963C99: jp      short loc_963CB9
0x963C9B: fld     [esp+158h+var_138]
0x963C9F: fmul    [ebp+arg_0]
0x963CA2: faddp   st(1), st
0x963CA4: fcompp
0x963CA6: fnstsw  ax
0x963CA8: test    ah, 5
0x963CAB: jp      short loc_963CBD
0x963CAD: xor     al, al
0x963CAF: pop     edi
0x963CB0: pop     esi
0x963CB1: mov     esp, ebp
0x963CB3: pop     ebp
0x963CB4: retn
0x963CB5: fstp    st(1)
0x963CB7: jmp     short loc_963CBB
0x963CB9: fstp    st
0x963CBB: fstp    st
0x963CBD: lea     ecx, [esp+158h+var_24]
0x963CC4: push    ecx
0x963CC5: lea     edx, [esp+15Ch+var_110]
0x963CC9: push    edx
0x963CCA: mov     ecx, esi
0x963CCC: call    sub_498FE0
0x963CD1: mov     edx, [eax+4]
0x963CD4: mov     ecx, [eax]
0x963CD6: mov     eax, [eax+8]
0x963CD9: mov     dword ptr [esp+158h+var_128+4], edx
0x963CDD: fld     dword ptr [esp+158h+var_128+4]
0x963CE1: mov     dword ptr [esp+158h+var_128], ecx
0x963CE5: fld     dword ptr [esp+158h+var_128]
0x963CE9: mov     [esp+158h+var_120], eax
0x963CED: fld     [esp+158h+var_120]
0x963CF1: fld     [esp+158h+var_B0]
0x963CF8: fmul    st, st(2)
0x963CFA: fld     [esp+158h+var_A0]
0x963D01: fmul    st, st(4)
0x963D03: faddp   st(1), st
0x963D05: fld     [esp+158h+var_B8]
0x963D0C: fmul    st, st(2)
0x963D0E: faddp   st(1), st
0x963D10: fstp    dword ptr [esp+158h+var_110]
0x963D14: fld     [esp+158h+var_68]
0x963D1B: fmulp   st(2), st
0x963D1D: fld     [esp+158h+var_50]
0x963D24: fmulp   st(3), st
0x963D26: fxch    st(1)
0x963D28: faddp   st(2), st
0x963D2A: fmul    [esp+158h+var_D0]
0x963D31: faddp   st(1), st
0x963D33: fstp    [esp+158h+var_13C]
0x963D37: fld     [esp+158h+var_144]
0x963D3B: fst     [esp+158h+var_128]
0x963D3F: fld     [esp+158h+var_58]
0x963D46: fmul    [esp+158h+var_F0]
0x963D4A: fstp    [esp+158h+var_144]
0x963D4E: fld     [esp+158h+var_144]
0x963D52: fabs
0x963D54: fstp    [esp+158h+var_144]
0x963D58: fld     [esp+158h+var_144]
0x963D5C: fxch    st(1)
0x963D5E: fmul    [esp+158h+var_98]
0x963D65: fstp    [esp+158h+var_144]
0x963D69: fld     [esp+158h+var_144]
0x963D6D: fabs
0x963D6F: fstp    [esp+158h+var_144]
0x963D73: fadd    [esp+158h+var_144]
0x963D77: fstp    [esp+158h+var_148]
0x963D7B: fld     dword ptr [esp+158h+var_110]
0x963D7F: fst     [esp+158h+var_F0]
0x963D83: fld     [esp+158h+var_148]
0x963D87: fld     st
0x963D89: fcom    st(2)
0x963D8B: fnstsw  ax
0x963D8D: fld     [esp+158h+var_13C]
0x963D91: test    ah, 5
0x963D94: jp      short loc_963DF8
0x963D96: fstp    st(2)
0x963D98: fldz
0x963D9A: fcomp   [esp+158h+var_130]
0x963D9E: fnstsw  ax
0x963DA0: test    ah, 41h
0x963DA3: jp      short loc_963DC3
0x963DA5: fld     [ebp+arg_0]
0x963DA8: fmulp   st(2), st
0x963DAA: fxch    st(1)
0x963DAC: faddp   st(2), st
0x963DAE: fcompp
0x963DB0: fnstsw  ax
0x963DB2: test    ah, 5
0x963DB5: jp      loc_963E69
0x963DBB: xor     al, al
0x963DBD: pop     edi
0x963DBE: pop     esi
0x963DBF: mov     esp, ebp
0x963DC1: pop     ebp
0x963DC2: retn
0x963DC3: fld     [esp+158h+var_100]
0x963DC7: faddp   st(3), st
0x963DC9: fxch    st(2)
0x963DCB: fstp    [esp+158h+var_144]
0x963DCF: fld     [esp+158h+var_144]
0x963DD3: fcom    st(2)
0x963DD5: fnstsw  ax
0x963DD7: test    ah, 41h
0x963DDA: jnz     loc_963E63
0x963DE0: fld     [ebp+arg_0]
0x963DE3: fmulp   st(2), st
0x963DE5: faddp   st(1), st
0x963DE7: fcompp
0x963DE9: fnstsw  ax
0x963DEB: test    ah, 41h
0x963DEE: jnz     short loc_963E69
0x963DF0: xor     al, al
0x963DF2: pop     edi
0x963DF3: pop     esi
0x963DF4: mov     esp, ebp
0x963DF6: pop     ebp
0x963DF7: retn
0x963DF8: fstp    st(1)
0x963DFA: fxch    st(1)
0x963DFC: fchs
0x963DFE: fcom    st(2)
0x963E00: fnstsw  ax
0x963E02: test    ah, 41h
0x963E05: jnz     short loc_963E5F
0x963E07: fldz
0x963E09: fcomp   [esp+158h+var_130]
0x963E0D: fnstsw  ax
0x963E0F: test    ah, 1
0x963E12: jnz     short loc_963E2E
0x963E14: fld     [ebp+arg_0]
0x963E17: fmulp   st(2), st
0x963E19: fxch    st(1)
0x963E1B: faddp   st(2), st
0x963E1D: fcompp
0x963E1F: fnstsw  ax
0x963E21: test    ah, 41h
0x963E24: jnz     short loc_963E69
0x963E26: xor     al, al
0x963E28: pop     edi
0x963E29: pop     esi
0x963E2A: mov     esp, ebp
0x963E2C: pop     ebp
0x963E2D: retn
0x963E2E: fld     [esp+158h+var_100]
0x963E32: faddp   st(3), st
0x963E34: fxch    st(2)
0x963E36: fstp    [esp+158h+var_144]
0x963E3A: fld     [esp+158h+var_144]
0x963E3E: fcom    st(2)
0x963E40: fnstsw  ax
0x963E42: test    ah, 5
0x963E45: jp      short loc_963E63
0x963E47: fld     [ebp+arg_0]
0x963E4A: fmulp   st(2), st
0x963E4C: faddp   st(1), st
0x963E4E: fcompp
0x963E50: fnstsw  ax
0x963E52: test    ah, 5
0x963E55: jp      short loc_963E69
0x963E57: xor     al, al
0x963E59: pop     edi
0x963E5A: pop     esi
0x963E5B: mov     esp, ebp
0x963E5D: pop     ebp
0x963E5E: retn
0x963E5F: fstp    st(2)
0x963E61: jmp     short loc_963E65
0x963E63: fstp    st
0x963E65: fstp    st(1)
0x963E67: fstp    st
0x963E69: lea     ecx, [esp+158h+var_18]
0x963E70: push    ecx
0x963E71: lea     edx, [esp+15Ch+var_110]
0x963E75: push    edx
0x963E76: mov     ecx, esi
0x963E78: call    sub_498FE0
0x963E7D: mov     edx, [eax+4]
0x963E80: mov     ecx, [eax]
0x963E82: mov     eax, [eax+8]
0x963E85: mov     dword ptr [esp+158h+var_100+4], edx
0x963E89: fld     dword ptr [esp+158h+var_100+4]
0x963E8D: mov     dword ptr [esp+158h+var_100], ecx
0x963E91: fld     dword ptr [esp+158h+var_100]
0x963E95: mov     [esp+158h+var_F8], eax
0x963E99: fld     [esp+158h+var_F8]
0x963E9D: fld     [esp+158h+var_B0]
0x963EA4: fmul    st, st(2)
0x963EA6: fld     [esp+158h+var_A0]
0x963EAD: fmul    st, st(4)
0x963EAF: faddp   st(1), st
0x963EB1: fld     [esp+158h+var_B8]
0x963EB8: fmul    st, st(2)
0x963EBA: faddp   st(1), st
0x963EBC: fstp    [esp+158h+var_144]
0x963EC0: fld     [esp+158h+var_68]
0x963EC7: fmulp   st(2), st
0x963EC9: fld     [esp+158h+var_50]
0x963ED0: fmulp   st(3), st
0x963ED2: fxch    st(1)
0x963ED4: faddp   st(2), st
0x963ED6: fmul    [esp+158h+var_D0]
0x963EDD: faddp   st(1), st
0x963EDF: fstp    dword ptr [esp+158h+var_110]
0x963EE3: fld     [esp+158h+var_14C]
0x963EE7: fst     [esp+158h+var_100]
0x963EEB: fld     [esp+158h+var_58]
0x963EF2: fmul    [esp+158h+var_38]
0x963EF9: fstp    [esp+158h+var_14C]
0x963EFD: fld     [esp+158h+var_14C]
0x963F01: fabs
0x963F03: fstp    [esp+158h+var_14C]
0x963F07: fld     [esp+158h+var_14C]
0x963F0B: fld     st(1)
0x963F0D: fmul    [esp+158h+var_98]
0x963F14: fstp    [esp+158h+var_14C]
0x963F18: fld     [esp+158h+var_14C]
0x963F1C: fabs
0x963F1E: fstp    [esp+158h+var_14C]
0x963F22: fadd    [esp+158h+var_14C]
0x963F26: fstp    [esp+158h+var_148]
0x963F2A: fld     [esp+158h+var_144]
0x963F2E: fld     [esp+158h+var_148]
0x963F32: fld     st
0x963F34: fcom    st(2)
0x963F36: fnstsw  ax
0x963F38: fld     dword ptr [esp+158h+var_110]
0x963F3C: test    ah, 5
0x963F3F: jp      short loc_963FB4
0x963F41: fstp    st(2)
0x963F43: fld     [esp+158h+var_130]
0x963F47: fchs
0x963F49: fstp    [esp+158h+var_12C]
0x963F4D: fldz
0x963F4F: fld     [esp+158h+var_12C]
0x963F53: fcom    st(1)
0x963F55: fnstsw  ax
0x963F57: fstp    st(1)
0x963F59: test    ah, 1
0x963F5C: jnz     short loc_963F8C
0x963F5E: fstp    st
0x963F60: fld     st(1)
0x963F62: fld     [ebp+arg_0]
0x963F65: fld     st
0x963F67: fmulp   st(2), st
0x963F69: fxch    st(1)
0x963F6B: fadd    st, st(4)
0x963F6D: fcomp   st(2)
0x963F6F: fnstsw  ax
0x963F71: fstp    st(1)
0x963F73: test    ah, 41h
0x963F76: jnz     loc_964050
0x963F7C: fstp    st(2)
0x963F7E: xor     al, al
0x963F80: fstp    st(2)
0x963F82: fstp    st
0x963F84: fstp    st
0x963F86: pop     edi
0x963F87: pop     esi
0x963F88: mov     esp, ebp
0x963F8A: pop     ebp
0x963F8B: retn
0x963F8C: fadd    st, st(3)
0x963F8E: fstp    [esp+158h+var_14C]
0x963F92: fld     [esp+158h+var_14C]
0x963F96: fcom    st(1)
0x963F98: fnstsw  ax
0x963F9A: test    ah, 41h
0x963F9D: jnz     loc_964049
0x963FA3: fld     st(2)
0x963FA5: fld     [ebp+arg_0]
0x963FA8: fld     st
0x963FAA: fmulp   st(2), st
0x963FAC: fxch    st(1)
0x963FAE: faddp   st(2), st
0x963FB0: fxch    st(1)
0x963FB2: jmp     short loc_963F6D
0x963FB4: fstp    st(1)
0x963FB6: fxch    st(1)
0x963FB8: fchs
0x963FBA: fcom    st(2)
0x963FBC: fnstsw  ax
0x963FBE: test    ah, 41h
0x963FC1: jnz     loc_96404B
0x963FC7: fld     [esp+158h+var_130]
0x963FCB: fchs
0x963FCD: fstp    [esp+158h+var_12C]
0x963FD1: fldz
0x963FD3: fld     [esp+158h+var_12C]
0x963FD7: fcom    st(1)
0x963FD9: fnstsw  ax
0x963FDB: fstp    st(1)
0x963FDD: test    ah, 41h
0x963FE0: jp      short loc_96400C
0x963FE2: fstp    st
0x963FE4: fld     st(1)
0x963FE6: fld     [ebp+arg_0]
0x963FE9: fld     st
0x963FEB: fmulp   st(2), st
0x963FED: fxch    st(1)
0x963FEF: fadd    st, st(4)
0x963FF1: fcomp   st(2)
0x963FF3: fnstsw  ax
0x963FF5: fstp    st(1)
0x963FF7: test    ah, 5
0x963FFA: jp      short loc_964050
0x963FFC: fstp    st(2)
0x963FFE: xor     al, al
0x964000: fstp    st(2)
0x964002: fstp    st
0x964004: fstp    st
0x964006: pop     edi
0x964007: pop     esi
0x964008: mov     esp, ebp
0x96400A: pop     ebp
0x96400B: retn
0x96400C: fadd    st, st(3)
0x96400E: fstp    [esp+158h+var_14C]
0x964012: fld     [esp+158h+var_14C]
0x964016: fcom    st(1)
0x964018: fnstsw  ax
0x96401A: test    ah, 5
0x96401D: jp      short loc_964049
0x96401F: fld     st(2)
0x964021: fld     [ebp+arg_0]
0x964024: fld     st
0x964026: fmulp   st(2), st
0x964028: fxch    st(1)
0x96402A: faddp   st(2), st
0x96402C: fxch    st(1)
0x96402E: fcomp   st(2)
0x964030: fnstsw  ax
0x964032: fstp    st(1)
0x964034: test    ah, 5
0x964037: jp      short loc_964050
0x964039: fstp    st(2)
0x96403B: xor     al, al
0x96403D: fstp    st(2)
0x96403F: fstp    st
0x964041: fstp    st
0x964043: pop     edi
0x964044: pop     esi
0x964045: mov     esp, ebp
0x964047: pop     ebp
0x964048: retn
0x964049: fstp    st(1)
0x96404B: fstp    st
0x96404D: fld     [ebp+arg_0]
0x964050: fxch    st(3)
0x964052: fsub    [esp+158h+var_128]
0x964056: fstp    [esp+158h+var_14C]
0x96405A: fxch    st(1)
0x96405C: fsub    [esp+158h+var_F0]
0x964060: fstp    [esp+158h+var_144]
0x964064: fsub    [esp+158h+var_13C]
0x964068: fstp    [esp+158h+var_138]
0x96406C: fld     [esp+158h+var_14C]
0x964070: fst     [esp+158h+var_F0]
0x964074: fld     [esp+158h+var_58]
0x96407B: fmul    [esp+158h+var_88]
0x964082: fstp    [esp+158h+var_14C]
0x964086: fld     [esp+158h+var_14C]
0x96408A: fabs
0x96408C: fstp    [esp+158h+var_14C]
0x964090: fld     [esp+158h+var_14C]
0x964094: fld     [esp+158h+var_98]
0x96409B: fmulp   st(2), st
0x96409D: fxch    st(1)
0x96409F: fstp    [esp+158h+var_14C]
0x9640A3: fld     [esp+158h+var_14C]
0x9640A7: fabs
0x9640A9: fstp    [esp+158h+var_14C]
0x9640AD: fadd    [esp+158h+var_14C]
0x9640B1: fstp    [esp+158h+var_148]
0x9640B5: fld     [esp+158h+var_144]
0x9640B9: fld     [esp+158h+var_148]
0x9640BD: fld     st
0x9640BF: fcom    st(2)
0x9640C1: fnstsw  ax
0x9640C3: test    ah, 5
0x9640C6: jp      short loc_96413C
0x9640C8: fstp    st(1)
0x9640CA: fld     [esp+158h+var_130]
0x9640CE: fchs
0x9640D0: fstp    [esp+158h+var_12C]
0x9640D4: fldz
0x9640D6: fld     [esp+158h+var_12C]
0x9640DA: fcom    st(1)
0x9640DC: fnstsw  ax
0x9640DE: fstp    st(1)
0x9640E0: test    ah, 1
0x9640E3: jnz     short loc_964106
0x9640E5: fstp    st
0x9640E7: fld     [esp+158h+var_138]
0x9640EB: fmulp   st(3), st
0x9640ED: fxch    st(2)
0x9640EF: faddp   st(1), st
0x9640F1: fcompp
0x9640F3: fnstsw  ax
0x9640F5: test    ah, 41h
0x9640F8: jnz     loc_9641B9
0x9640FE: xor     al, al
0x964100: pop     edi
0x964101: pop     esi
0x964102: mov     esp, ebp
0x964104: pop     ebp
0x964105: retn
0x964106: faddp   st(2), st
0x964108: fxch    st(1)
0x96410A: fstp    [esp+158h+var_14C]
0x96410E: fld     [esp+158h+var_14C]
0x964112: fcom    st(1)
0x964114: fnstsw  ax
0x964116: test    ah, 41h
0x964119: jnz     loc_9641B3
0x96411F: fld     [esp+158h+var_138]
0x964123: fmulp   st(3), st
0x964125: faddp   st(2), st
0x964127: fcompp
0x964129: fnstsw  ax
0x96412B: test    ah, 5
0x96412E: jp      loc_9641B9
0x964134: xor     al, al
0x964136: pop     edi
0x964137: pop     esi
0x964138: mov     esp, ebp
0x96413A: pop     ebp
0x96413B: retn
0x96413C: fstp    st
0x96413E: fchs
0x964140: fcom    st(1)
0x964142: fnstsw  ax
0x964144: test    ah, 41h
0x964147: jnz     short loc_9641AF
0x964149: fld     [esp+158h+var_130]
0x96414D: fchs
0x96414F: fstp    [esp+158h+var_12C]
0x964153: fldz
0x964155: fld     [esp+158h+var_12C]
0x964159: fcom    st(1)
0x96415B: fnstsw  ax
0x96415D: fstp    st(1)
0x96415F: test    ah, 41h
0x964162: jp      short loc_964181
0x964164: fstp    st
0x964166: fld     [esp+158h+var_138]
0x96416A: fmulp   st(3), st
0x96416C: fxch    st(2)
0x96416E: faddp   st(1), st
0x964170: fcompp
0x964172: fnstsw  ax
0x964174: test    ah, 5
0x964177: jp      short loc_9641B9
0x964179: xor     al, al
0x96417B: pop     edi
0x96417C: pop     esi
0x96417D: mov     esp, ebp
0x96417F: pop     ebp
0x964180: retn
0x964181: faddp   st(2), st
0x964183: fxch    st(1)
0x964185: fstp    [esp+158h+var_14C]
0x964189: fld     [esp+158h+var_14C]
0x96418D: fcom    st(1)
0x96418F: fnstsw  ax
0x964191: test    ah, 5
0x964194: jp      short loc_9641B3
0x964196: fld     [esp+158h+var_138]
0x96419A: fmulp   st(3), st
0x96419C: faddp   st(2), st
0x96419E: fcompp
0x9641A0: fnstsw  ax
0x9641A2: test    ah, 41h
0x9641A5: jnz     short loc_9641B9
0x9641A7: xor     al, al
0x9641A9: pop     edi
0x9641AA: pop     esi
0x9641AB: mov     esp, ebp
0x9641AD: pop     ebp
0x9641AE: retn
0x9641AF: fstp    st(1)
0x9641B1: jmp     short loc_9641B5
0x9641B3: fstp    st
0x9641B5: fstp    st
0x9641B7: fstp    st
0x9641B9: lea     ecx, [esp+158h+var_24]
0x9641C0: push    ecx
0x9641C1: lea     edx, [esp+15Ch+var_38]
0x9641C8: push    edx
0x9641C9: mov     ecx, edi
0x9641CB: call    sub_498FE0
0x9641D0: mov     edx, [eax+4]
0x9641D3: mov     ecx, [eax]
0x9641D5: mov     eax, [eax+8]
0x9641D8: mov     dword ptr [esp+158h+var_98+4], edx
0x9641DF: fld     dword ptr [esp+158h+var_98+4]
0x9641E6: mov     dword ptr [esp+158h+var_98], ecx
0x9641ED: fld     dword ptr [esp+158h+var_98]
0x9641F4: mov     [esp+158h+var_90], eax
0x9641FB: fld     [esp+158h+var_90]
0x964202: fld     [esp+158h+var_B0]
0x964209: fmul    st, st(2)
0x96420B: fld     [esp+158h+var_A0]
0x964212: fmul    st, st(4)
0x964214: faddp   st(1), st
0x964216: fld     [esp+158h+var_B8]
0x96421D: fmul    st, st(2)
0x96421F: faddp   st(1), st
0x964221: fstp    [esp+158h+var_13C]
0x964225: fld     [esp+158h+var_68]
0x96422C: fmulp   st(2), st
0x96422E: fld     [esp+158h+var_50]
0x964235: fmulp   st(3), st
0x964237: fxch    st(1)
0x964239: faddp   st(2), st
0x96423B: fmul    [esp+158h+var_D0]
0x964242: faddp   st(1), st
0x964244: fstp    [esp+158h+var_14C]
0x964248: fld     [esp+158h+var_C0]
0x96424F: fmul    [esp+158h+var_58]
0x964256: fstp    [esp+158h+var_144]
0x96425A: fld     [esp+158h+var_144]
0x96425E: fabs
0x964260: fstp    [esp+158h+var_144]
0x964264: fld     [esp+158h+var_144]
0x964268: fld     [esp+158h+var_128]
0x96426C: fmul    [esp+158h+var_60]
0x964273: fstp    [esp+158h+var_144]
0x964277: fld     [esp+158h+var_144]
0x96427B: fabs
0x96427D: fstp    [esp+158h+var_144]
0x964281: fadd    [esp+158h+var_144]
0x964285: fstp    [esp+158h+var_148]
0x964289: fld     [esp+158h+var_13C]
0x96428D: fst     [esp+158h+var_128]
0x964291: fld     [esp+158h+var_148]
0x964295: fld     st
0x964297: fcom    st(2)
0x964299: fnstsw  ax
0x96429B: fld     [esp+158h+var_14C]
0x96429F: test    ah, 5
0x9642A2: jp      short loc_964306
0x9642A4: fstp    st(2)
0x9642A6: fldz
0x9642A8: fcomp   [esp+158h+var_114]
0x9642AC: fnstsw  ax
0x9642AE: test    ah, 41h
0x9642B1: jp      short loc_9642D1
0x9642B3: fld     [ebp+arg_0]
0x9642B6: fmulp   st(2), st
0x9642B8: fxch    st(1)
0x9642BA: faddp   st(2), st
0x9642BC: fcompp
0x9642BE: fnstsw  ax
0x9642C0: test    ah, 5
0x9642C3: jp      loc_964377
0x9642C9: xor     al, al
0x9642CB: pop     edi
0x9642CC: pop     esi
0x9642CD: mov     esp, ebp
0x9642CF: pop     ebp
0x9642D0: retn
0x9642D1: fld     [esp+158h+var_E0]
0x9642D5: faddp   st(3), st
0x9642D7: fxch    st(2)
0x9642D9: fstp    [esp+158h+var_144]
0x9642DD: fld     [esp+158h+var_144]
0x9642E1: fcom    st(2)
0x9642E3: fnstsw  ax
0x9642E5: test    ah, 41h
0x9642E8: jnz     loc_964371
0x9642EE: fld     [ebp+arg_0]
0x9642F1: fmulp   st(2), st
0x9642F3: faddp   st(1), st
0x9642F5: fcompp
0x9642F7: fnstsw  ax
0x9642F9: test    ah, 41h
0x9642FC: jnz     short loc_964377
0x9642FE: xor     al, al
0x964300: pop     edi
0x964301: pop     esi
0x964302: mov     esp, ebp
0x964304: pop     ebp
0x964305: retn
0x964306: fstp    st(1)
0x964308: fxch    st(1)
0x96430A: fchs
0x96430C: fcom    st(2)
0x96430E: fnstsw  ax
0x964310: test    ah, 41h
0x964313: jnz     short loc_96436D
0x964315: fldz
0x964317: fcomp   [esp+158h+var_114]
0x96431B: fnstsw  ax
0x96431D: test    ah, 1
0x964320: jnz     short loc_96433C
0x964322: fld     [ebp+arg_0]
0x964325: fmulp   st(2), st
0x964327: fxch    st(1)
0x964329: faddp   st(2), st
0x96432B: fcompp
0x96432D: fnstsw  ax
0x96432F: test    ah, 41h
0x964332: jnz     short loc_964377
0x964334: xor     al, al
0x964336: pop     edi
0x964337: pop     esi
0x964338: mov     esp, ebp
0x96433A: pop     ebp
0x96433B: retn
0x96433C: fld     [esp+158h+var_E0]
0x964340: faddp   st(3), st
0x964342: fxch    st(2)
0x964344: fstp    [esp+158h+var_144]
0x964348: fld     [esp+158h+var_144]
0x96434C: fcom    st(2)
0x96434E: fnstsw  ax
0x964350: test    ah, 5
0x964353: jp      short loc_964371
0x964355: fld     [ebp+arg_0]
0x964358: fmulp   st(2), st
0x96435A: faddp   st(1), st
0x96435C: fcompp
0x96435E: fnstsw  ax
0x964360: test    ah, 5
0x964363: jp      short loc_964377
0x964365: xor     al, al
0x964367: pop     edi
0x964368: pop     esi
0x964369: mov     esp, ebp
0x96436B: pop     ebp
0x96436C: retn
0x96436D: fstp    st(2)
0x96436F: jmp     short loc_964373
0x964371: fstp    st
0x964373: fstp    st(1)
0x964375: fstp    st
0x964377: lea     ecx, [esp+158h+var_18]
0x96437E: push    ecx
0x96437F: lea     edx, [esp+15Ch+var_50]
0x964386: push    edx
0x964387: mov     ecx, edi
0x964389: call    sub_498FE0
0x96438E: mov     ecx, [eax]
0x964390: mov     edx, [eax+4]
0x964393: mov     eax, [eax+8]
0x964396: mov     dword ptr [esp+158h+var_E0], ecx
0x96439A: lea     ecx, [esp+158h+var_C]
0x9643A1: push    ecx
0x9643A2: lea     ecx, [esp+15Ch+var_E0]
0x9643A6: mov     dword ptr [esp+15Ch+var_E0+4], edx
0x9643AD: mov     [esp+15Ch+var_D8], eax
0x9643B4: call    sub_47D9E0
0x9643B9: fstp    [esp+158h+var_13C]
0x9643BD: lea     edx, [esp+158h+var_74]
0x9643C4: push    edx
0x9643C5: lea     ecx, [esp+15Ch+var_E0]
0x9643C9: call    sub_47D9E0
0x9643CE: fstp    dword ptr [esp+158h+var_110]
0x9643D2: fld     [esp+158h+var_80]
0x9643D9: fmul    [esp+158h+var_58]
0x9643E0: fstp    [esp+158h+var_144]
0x9643E4: fld     [esp+158h+var_144]
0x9643E8: fabs
0x9643EA: fstp    [esp+158h+var_144]
0x9643EE: fld     [esp+158h+var_144]
0x9643F2: fld     [esp+158h+var_100]
0x9643F6: fld     [esp+158h+var_60]
0x9643FD: fmul    st(1), st
0x9643FF: fxch    st(1)
0x964401: fstp    [esp+158h+var_144]
0x964405: fld     [esp+158h+var_144]
0x964409: fabs
0x96440B: fstp    [esp+158h+var_144]
0x96440F: fld     [esp+158h+var_144]
0x964413: faddp   st(2), st
0x964415: fxch    st(1)
0x964417: fstp    [esp+158h+var_148]
0x96441B: fld     [esp+158h+var_13C]
0x96441F: fld     [esp+158h+var_148]
0x964423: fld     st
0x964425: fcom    st(2)
0x964427: fnstsw  ax
0x964429: fld     dword ptr [esp+158h+var_110]
0x96442D: test    ah, 5
0x964430: jp      short loc_9644A5
0x964432: fstp    st(2)
0x964434: fld     [esp+158h+var_114]
0x964438: fchs
0x96443A: fstp    [esp+158h+var_130]
0x96443E: fldz
0x964440: fld     [esp+158h+var_130]
0x964444: fcom    st(1)
0x964446: fnstsw  ax
0x964448: fstp    st(1)
0x96444A: test    ah, 1
0x96444D: jnz     short loc_96447D
0x96444F: fstp    st
0x964451: fld     st(1)
0x964453: fld     [ebp+arg_0]
0x964456: fld     st
0x964458: fmulp   st(2), st
0x96445A: fxch    st(1)
0x96445C: fadd    st, st(4)
0x96445E: fcomp   st(2)
0x964460: fnstsw  ax
0x964462: fstp    st(1)
0x964464: test    ah, 41h
0x964467: jnz     loc_964541
0x96446D: fstp    st(2)
0x96446F: xor     al, al
0x964471: fstp    st
0x964473: fstp    st
0x964475: fstp    st
0x964477: pop     edi
0x964478: pop     esi
0x964479: mov     esp, ebp
0x96447B: pop     ebp
0x96447C: retn
0x96447D: fadd    st, st(3)
0x96447F: fstp    [esp+158h+var_144]
0x964483: fld     [esp+158h+var_144]
0x964487: fcom    st(1)
0x964489: fnstsw  ax
0x96448B: test    ah, 41h
0x96448E: jnz     loc_96453A
0x964494: fld     st(2)
0x964496: fld     [ebp+arg_0]
0x964499: fld     st
0x96449B: fmulp   st(2), st
0x96449D: fxch    st(1)
0x96449F: faddp   st(2), st
0x9644A1: fxch    st(1)
0x9644A3: jmp     short loc_96445E
0x9644A5: fstp    st(1)
0x9644A7: fxch    st(1)
0x9644A9: fchs
0x9644AB: fcom    st(2)
0x9644AD: fnstsw  ax
0x9644AF: test    ah, 41h
0x9644B2: jnz     loc_96453C
0x9644B8: fld     [esp+158h+var_114]
0x9644BC: fchs
0x9644BE: fstp    [esp+158h+var_130]
0x9644C2: fldz
0x9644C4: fld     [esp+158h+var_130]
0x9644C8: fcom    st(1)
0x9644CA: fnstsw  ax
0x9644CC: fstp    st(1)
0x9644CE: test    ah, 41h
0x9644D1: jp      short loc_9644FD
0x9644D3: fstp    st
0x9644D5: fld     st(1)
0x9644D7: fld     [ebp+arg_0]
0x9644DA: fld     st
0x9644DC: fmulp   st(2), st
0x9644DE: fxch    st(1)
0x9644E0: fadd    st, st(4)
0x9644E2: fcomp   st(2)
0x9644E4: fnstsw  ax
0x9644E6: fstp    st(1)
0x9644E8: test    ah, 5
0x9644EB: jp      short loc_964541
0x9644ED: fstp    st(2)
0x9644EF: xor     al, al
0x9644F1: fstp    st
0x9644F3: fstp    st
0x9644F5: fstp    st
0x9644F7: pop     edi
0x9644F8: pop     esi
0x9644F9: mov     esp, ebp
0x9644FB: pop     ebp
0x9644FC: retn
0x9644FD: fadd    st, st(3)
0x9644FF: fstp    [esp+158h+var_144]
0x964503: fld     [esp+158h+var_144]
0x964507: fcom    st(1)
0x964509: fnstsw  ax
0x96450B: test    ah, 5
0x96450E: jp      short loc_96453A
0x964510: fld     st(2)
0x964512: fld     [ebp+arg_0]
0x964515: fld     st
0x964517: fmulp   st(2), st
0x964519: fxch    st(1)
0x96451B: faddp   st(2), st
0x96451D: fxch    st(1)
0x96451F: fcomp   st(2)
0x964521: fnstsw  ax
0x964523: fstp    st(1)
0x964525: test    ah, 5
0x964528: jp      short loc_964541
0x96452A: fstp    st(2)
0x96452C: xor     al, al
0x96452E: fstp    st
0x964530: fstp    st
0x964532: fstp    st
0x964534: pop     edi
0x964535: pop     esi
0x964536: mov     esp, ebp
0x964538: pop     ebp
0x964539: retn
0x96453A: fstp    st(1)
0x96453C: fstp    st
0x96453E: fld     [ebp+arg_0]
0x964541: fxch    st(2)
0x964543: fsub    [esp+158h+var_128]
0x964547: fstp    [esp+158h+var_144]
0x96454B: fsub    [esp+158h+var_14C]
0x96454F: fstp    [esp+158h+var_138]
0x964553: fld     [esp+158h+var_58]
0x96455A: fmul    [esp+158h+var_A8]
0x964561: fstp    [esp+158h+var_14C]
0x964565: fld     [esp+158h+var_14C]
0x964569: fabs
0x96456B: fstp    [esp+158h+var_14C]
0x96456F: fld     [esp+158h+var_14C]
0x964573: fxch    st(2)
0x964575: fmul    [esp+158h+var_F0]
0x964579: fstp    [esp+158h+var_14C]
0x96457D: fld     [esp+158h+var_14C]
0x964581: fabs
0x964583: fstp    [esp+158h+var_14C]
0x964587: fld     [esp+158h+var_14C]
0x96458B: faddp   st(2), st
0x96458D: fxch    st(1)
0x96458F: fstp    [esp+158h+var_148]
0x964593: fld     [esp+158h+var_144]
0x964597: fld     [esp+158h+var_148]
0x96459B: fld     st
0x96459D: fcom    st(2)
0x96459F: fnstsw  ax
0x9645A1: test    ah, 5
0x9645A4: jp      short loc_96461A
0x9645A6: fstp    st(1)
0x9645A8: fld     [esp+158h+var_114]
0x9645AC: fchs
0x9645AE: fstp    [esp+158h+var_130]
0x9645B2: fldz
0x9645B4: fld     [esp+158h+var_130]
0x9645B8: fcom    st(1)
0x9645BA: fnstsw  ax
0x9645BC: fstp    st(1)
0x9645BE: test    ah, 1
0x9645C1: jnz     short loc_9645E4
0x9645C3: fstp    st
0x9645C5: fld     [esp+158h+var_138]
0x9645C9: fmulp   st(3), st
0x9645CB: fxch    st(2)
0x9645CD: faddp   st(1), st
0x9645CF: fcompp
0x9645D1: fnstsw  ax
0x9645D3: test    ah, 41h
0x9645D6: jnz     loc_9646A1
0x9645DC: xor     al, al
0x9645DE: pop     edi
0x9645DF: pop     esi
0x9645E0: mov     esp, ebp
0x9645E2: pop     ebp
0x9645E3: retn
0x9645E4: faddp   st(2), st
0x9645E6: fxch    st(1)
0x9645E8: fstp    [esp+158h+var_14C]
0x9645EC: fld     [esp+158h+var_14C]
0x9645F0: fcom    st(1)
0x9645F2: fnstsw  ax
0x9645F4: test    ah, 41h
0x9645F7: jnz     loc_96469B
0x9645FD: fld     [esp+158h+var_138]
0x964601: fmulp   st(3), st
0x964603: faddp   st(2), st
0x964605: fcompp
0x964607: fnstsw  ax
0x964609: test    ah, 5
0x96460C: jp      loc_9646A1
0x964612: xor     al, al
0x964614: pop     edi
0x964615: pop     esi
0x964616: mov     esp, ebp
0x964618: pop     ebp
0x964619: retn
0x96461A: fstp    st
0x96461C: fchs
0x96461E: fcom    st(1)
0x964620: fnstsw  ax
0x964622: test    ah, 41h
0x964625: jnz     short loc_96468D
0x964627: fld     [esp+158h+var_114]
0x96462B: fchs
0x96462D: fstp    [esp+158h+var_130]
0x964631: fldz
0x964633: fld     [esp+158h+var_130]
0x964637: fcom    st(1)
0x964639: fnstsw  ax
0x96463B: fstp    st(1)
0x96463D: test    ah, 41h
0x964640: jp      short loc_96465F
0x964642: fstp    st
0x964644: fld     [esp+158h+var_138]
0x964648: fmulp   st(3), st
0x96464A: fxch    st(2)
0x96464C: faddp   st(1), st
0x96464E: fcompp
0x964650: fnstsw  ax
0x964652: test    ah, 5
0x964655: jp      short loc_9646A1
0x964657: xor     al, al
0x964659: pop     edi
0x96465A: pop     esi
0x96465B: mov     esp, ebp
0x96465D: pop     ebp
0x96465E: retn
0x96465F: faddp   st(2), st
0x964661: fxch    st(1)
0x964663: fstp    [esp+158h+var_14C]
0x964667: fld     [esp+158h+var_14C]
0x96466B: fcom    st(1)
0x96466D: fnstsw  ax
0x96466F: test    ah, 5
0x964672: jp      short loc_96469B
0x964674: fld     [esp+158h+var_138]
0x964678: fmulp   st(3), st
0x96467A: faddp   st(2), st
0x96467C: fcompp
0x96467E: fnstsw  ax
0x964680: test    ah, 41h
0x964683: jnz     short loc_9646A1
0x964685: xor     al, al
0x964687: pop     edi
0x964688: pop     esi
0x964689: mov     esp, ebp
0x96468B: pop     ebp
0x96468C: retn
0x96468D: fstp    st(1)
0x96468F: mov     al, 1
0x964691: fstp    st
0x964693: fstp    st
0x964695: pop     edi
0x964696: pop     esi
0x964697: mov     esp, ebp
0x964699: pop     ebp
0x96469A: retn
0x96469B: fstp    st
0x96469D: fstp    st
0x96469F: fstp    st
0x9646A1: pop     edi
0x9646A2: mov     al, 1
0x9646A4: pop     esi
0x9646A5: mov     esp, ebp
0x9646A7: pop     ebp
0x9646A8: retn
