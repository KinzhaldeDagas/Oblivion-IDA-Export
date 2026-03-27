0x6DF350: sub     esp, 0E0h
0x6DF356: push    ebx
0x6DF357: mov     ebx, ecx
0x6DF359: mov     eax, [ebx+10h]
0x6DF35C: test    eax, eax
0x6DF35E: jnz     short loc_6DF3B4
0x6DF360: fld     dword ptr ds:0A7DEB4h
0x6DF366: mov     eax, [esp+0E4h+arg_8]
0x6DF36D: fchs
0x6DF36F: fstp    dword ptr [eax]
0x6DF371: fld     dword ptr ds:0A7DEB4h
0x6DF377: fchs
0x6DF379: fstp    dword ptr [eax+10h]
0x6DF37C: fld     dword ptr ds:0A7DEB4h
0x6DF382: fchs
0x6DF384: fstp    dword ptr [eax+1Ch]
0x6DF387: xor     al, al
0x6DF389: fld     dword ptr ds:0A7DEB4h
0x6DF38F: fchs
0x6DF391: fstp    dword ptr [ebx+18h]
0x6DF394: fld     dword ptr ds:0A7DEB4h
0x6DF39A: fchs
0x6DF39C: fstp    dword ptr [ebx+28h]
0x6DF39F: fld     dword ptr ds:0A7DEB4h
0x6DF3A5: fchs
0x6DF3A7: fstp    dword ptr [ebx+34h]
0x6DF3AA: pop     ebx
0x6DF3AB: add     esp, 0E0h
0x6DF3B1: retn    0Ch
0x6DF3B4: mov     ecx, [eax+88h]
0x6DF3BA: mov     edx, [eax+8Ch]
0x6DF3C0: mov     eax, [eax+90h]
0x6DF3C6: mov     [esp+0E4h+var_DC], ecx
0x6DF3CA: mov     ecx, [ebx+38h]
0x6DF3CD: test    ecx, ecx
0x6DF3CF: push    ebp
0x6DF3D0: mov     [esp+0E8h+var_D4], eax
0x6DF3D4: mov     eax, [esp+0E8h+arg_4]
0x6DF3DB: mov     ebp, [eax+1Ch]
0x6DF3DE: push    esi
0x6DF3DF: mov     [esp+0ECh+var_D8], edx
0x6DF3E3: jz      short loc_6DF43D
0x6DF3E5: mov     edx, [ecx]
0x6DF3E7: fld     [esp+0ECh+arg_0]
0x6DF3EE: lea     esi, [esp+0ECh+var_88]
0x6DF3F2: push    esi
0x6DF3F3: push    eax
0x6DF3F4: mov     eax, [edx+54h]
0x6DF3F7: push    ecx
0x6DF3F8: fstp    [esp+0F8h+var_F8]
0x6DF3FB: call    eax
0x6DF3FD: test    al, al
0x6DF3FF: jnz     short loc_6DF42E
0x6DF401: fld     dword ptr ds:0A7DEB4h
0x6DF407: pop     esi
0x6DF408: fchs
0x6DF40A: pop     ebp
0x6DF40B: fstp    dword ptr [ebx+18h]
0x6DF40E: fld     dword ptr ds:0A7DEB4h
0x6DF414: fchs
0x6DF416: fstp    dword ptr [ebx+28h]
0x6DF419: fld     dword ptr ds:0A7DEB4h
0x6DF41F: fchs
0x6DF421: fstp    dword ptr [ebx+34h]
0x6DF424: pop     ebx
0x6DF425: add     esp, 0E0h
0x6DF42B: retn    0Ch
0x6DF42E: lea     ecx, [esp+0ECh+var_88]
0x6DF432: push    ecx
0x6DF433: lea     ecx, [ebx+18h]
0x6DF436: call    sub_471390
0x6DF43B: jmp     short loc_6DF452
0x6DF43D: mov     edx, [eax+54h]
0x6DF440: mov     ecx, [eax+58h]
0x6DF443: mov     [esp+0ECh+var_88], edx
0x6DF447: mov     edx, [eax+5Ch]
0x6DF44A: mov     [esp+0ECh+var_84], ecx
0x6DF44E: mov     [esp+0ECh+var_80], edx
0x6DF452: test    ebp, ebp
0x6DF454: push    edi
0x6DF455: mov     ecx, 9
0x6DF45A: lea     edi, [esp+0F0h+var_6C]
0x6DF461: jz      short loc_6DF4DC
0x6DF463: lea     esi, [ebp+64h]
0x6DF466: rep movsd
0x6DF468: fld     dword ptr [ebp+94h]
0x6DF46E: fstp    [esp+0F0h+var_E0]
0x6DF472: lea     eax, [esp+0F0h+var_88]
0x6DF476: push    eax
0x6DF477: lea     ecx, [esp+0F4h+var_B8]
0x6DF47B: push    ecx
0x6DF47C: lea     ecx, [esp+0F8h+var_6C]
0x6DF483: call    sub_7101F0
0x6DF488: fld     [esp+0F0h+var_E0]
0x6DF48C: fld     st
0x6DF48E: fmul    dword ptr [eax]
0x6DF490: fstp    [esp+0F0h+var_D0]
0x6DF494: fld     dword ptr [eax+4]
0x6DF497: fmul    st, st(1)
0x6DF499: fstp    [esp+0F0h+var_CC]
0x6DF49D: fmul    dword ptr [eax+8]
0x6DF4A0: fstp    [esp+0F0h+var_C8]
0x6DF4A4: fld     dword ptr [ebp+88h]
0x6DF4AA: fadd    [esp+0F0h+var_D0]
0x6DF4AE: fstp    [esp+0F0h+var_B8]
0x6DF4B2: mov     edx, [esp+0F0h+var_B8]
0x6DF4B6: fld     dword ptr [ebp+8Ch]
0x6DF4BC: fadd    [esp+0F0h+var_CC]
0x6DF4C0: fstp    [esp+0F0h+var_B4]
0x6DF4C4: mov     eax, [esp+0F0h+var_B4]
0x6DF4C8: fld     dword ptr [ebp+90h]
0x6DF4CE: fadd    [esp+0F0h+var_C8]
0x6DF4D2: fstp    [esp+0F0h+var_B0]
0x6DF4D6: mov     ecx, [esp+0F0h+var_B0]
0x6DF4DA: jmp     short loc_6DF4EF
0x6DF4DC: mov     edx, [esp+0F0h+var_88]
0x6DF4E0: mov     eax, [esp+0F0h+var_84]
0x6DF4E4: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6DF4E9: rep movsd
0x6DF4EB: mov     ecx, [esp+0F0h+var_80]
0x6DF4EF: fld     [esp+0F0h+var_DC]
0x6DF4F3: mov     [esp+0F0h+var_D0], edx
0x6DF4F7: fsub    [esp+0F0h+var_D0]
0x6DF4FB: mov     [esp+0F0h+var_CC], eax
0x6DF4FF: mov     [esp+0F0h+var_C8], ecx
0x6DF503: fstp    [esp+0F0h+var_C4]
0x6DF507: fld     [esp+0F0h+var_D8]
0x6DF50B: fsub    [esp+0F0h+var_CC]
0x6DF50F: fstp    [esp+0F0h+var_C0]
0x6DF513: fld     [esp+0F0h+var_D4]
0x6DF517: fsub    [esp+0F0h+var_C8]
0x6DF51B: fstp    [esp+0F0h+var_BC]
0x6DF51F: fld     [esp+0F0h+var_C4]
0x6DF523: fld     [esp+0F0h+var_C0]
0x6DF527: fld     [esp+0F0h+var_BC]
0x6DF52B: fld     st(1)
0x6DF52D: fmulp   st(2), st
0x6DF52F: fld     st(2)
0x6DF531: fmulp   st(3), st
0x6DF533: fxch    st(1)
0x6DF535: faddp   st(2), st
0x6DF537: fmul    st, st
0x6DF539: faddp   st(1), st
0x6DF53B: fstp    [esp+0F0h+var_E0]
0x6DF53F: fld     [esp+0F0h+var_E0]
0x6DF543: fcomp   dword ptr ds:0A37080h
0x6DF549: fnstsw  ax
0x6DF54B: test    ah, 5
0x6DF54E: jp      short loc_6DF55E
0x6DF550: lea     ecx, [esp+0F0h+var_AC]
0x6DF554: call    sub_70FD10
0x6DF559: jmp     loc_6DF862
0x6DF55E: lea     ecx, [esp+0F0h+var_C4]
0x6DF562: call    sub_43F350
0x6DF567: fstp    st
0x6DF569: fld     dword ptr ds:0A7B17Ch
0x6DF56F: fld     [esp+0F0h+var_BC]
0x6DF573: fcom    st(1)
0x6DF575: fnstsw  ax
0x6DF577: fstp    st(1)
0x6DF579: test    ah, 5
0x6DF57C: fld     [esp+0F0h+var_C0]
0x6DF580: jp      short loc_6DF593
0x6DF582: fxch    st(1)
0x6DF584: fcom    qword ptr ds:0A3F460h
0x6DF58A: fnstsw  ax
0x6DF58C: test    ah, 41h
0x6DF58F: jz      short loc_6DF5B1
0x6DF591: fxch    st(1)
0x6DF593: fld     dword ptr ds:0A7B178h
0x6DF599: fcomp   st(2)
0x6DF59B: fnstsw  ax
0x6DF59D: test    ah, 5
0x6DF5A0: jp      short loc_6DF5CC
0x6DF5A2: fxch    st(1)
0x6DF5A4: fcom    qword ptr ds:0A7B170h
0x6DF5AA: fnstsw  ax
0x6DF5AC: test    ah, 5
0x6DF5AF: jp      short loc_6DF5CA
0x6DF5B1: mov     edx, ds:0B258DCh
0x6DF5B7: fxch    st(1)
0x6DF5B9: mov     eax, ds:0B258E0h
0x6DF5BE: fst     [esp+0F0h+var_E0]
0x6DF5C2: mov     ecx, ds:0B258E4h
0x6DF5C8: jmp     short loc_6DF5E5
0x6DF5CA: fxch    st(1)
0x6DF5CC: mov     edx, ds:0B258E8h
0x6DF5D2: fxch    st(1)
0x6DF5D4: mov     eax, ds:0B258ECh
0x6DF5D9: fst     [esp+0F0h+var_E0]
0x6DF5DD: mov     ecx, ds:0B258F0h
0x6DF5E3: fxch    st(1)
0x6DF5E5: fld     [esp+0F0h+var_C4]
0x6DF5E9: mov     [esp+0F0h+var_B8], edx
0x6DF5ED: fld     [esp+0F0h+var_E0]
0x6DF5F1: mov     [esp+0F0h+var_B4], eax
0x6DF5F5: fld     st
0x6DF5F7: mov     [esp+0F0h+var_B0], ecx
0x6DF5FB: fmulp   st(2), st
0x6DF5FD: lea     ecx, [esp+0F0h+var_B8]
0x6DF601: fxch    st(1)
0x6DF603: fstp    [esp+0F0h+var_DC]
0x6DF607: fld     st
0x6DF609: fmulp   st(2), st
0x6DF60B: fxch    st(1)
0x6DF60D: fstp    [esp+0F0h+var_D8]
0x6DF611: fmulp   st(1), st
0x6DF613: fstp    [esp+0F0h+var_D4]
0x6DF617: fld     [esp+0F0h+var_B8]
0x6DF61B: fsub    [esp+0F0h+var_DC]
0x6DF61F: fstp    [esp+0F0h+var_B8]
0x6DF623: fld     [esp+0F0h+var_B4]
0x6DF627: fsub    [esp+0F0h+var_D8]
0x6DF62B: fstp    [esp+0F0h+var_B4]
0x6DF62F: fld     [esp+0F0h+var_B0]
0x6DF633: fsub    [esp+0F0h+var_D4]
0x6DF637: fstp    [esp+0F0h+var_B0]
0x6DF63B: call    sub_43F350
0x6DF640: test    byte ptr [ebx+0Ch], 1
0x6DF644: fstp    st
0x6DF646: jnz     short loc_6DF67E
0x6DF648: fld     [esp+0F0h+var_C4]
0x6DF64C: fchs
0x6DF64E: fstp    [esp+0F0h+var_DC]
0x6DF652: mov     edx, [esp+0F0h+var_DC]
0x6DF656: fld     [esp+0F0h+var_C0]
0x6DF65A: mov     [esp+0F0h+var_C4], edx
0x6DF65E: fchs
0x6DF660: fstp    [esp+0F0h+var_D8]
0x6DF664: mov     eax, [esp+0F0h+var_D8]
0x6DF668: fld     [esp+0F0h+var_BC]
0x6DF66C: mov     [esp+0F0h+var_C0], eax
0x6DF670: fchs
0x6DF672: fstp    [esp+0F0h+var_D4]
0x6DF676: mov     ecx, [esp+0F0h+var_D4]
0x6DF67A: mov     [esp+0F0h+var_BC], ecx
0x6DF67E: fld     [esp+0F0h+var_BC]
0x6DF682: movzx   eax, byte ptr [ebx+0Ch]
0x6DF686: fld     [esp+0F0h+var_C0]
0x6DF68A: shr     eax, 1
0x6DF68C: fld     [esp+0F0h+var_B4]
0x6DF690: and     eax, 3
0x6DF693: sub     eax, 0
0x6DF696: fld     st
0x6DF698: fmul    st, st(3)
0x6DF69A: fld     [esp+0F0h+var_B0]
0x6DF69E: fld     st
0x6DF6A0: fmul    st, st(4)
0x6DF6A2: fsubp   st(2), st
0x6DF6A4: fxch    st(1)
0x6DF6A6: fstp    [esp+0F0h+var_D0]
0x6DF6AA: fld     st
0x6DF6AC: fmul    [esp+0F0h+var_C4]
0x6DF6B0: fld     [esp+0F0h+var_B8]
0x6DF6B4: fld     st
0x6DF6B6: fmul    st, st(6)
0x6DF6B8: fsubp   st(2), st
0x6DF6BA: fxch    st(1)
0x6DF6BC: fstp    [esp+0F0h+var_CC]
0x6DF6C0: fld     st
0x6DF6C2: fmul    st, st(4)
0x6DF6C4: fld     st(3)
0x6DF6C6: fmul    [esp+0F0h+var_C4]
0x6DF6CA: fsubp   st(1), st
0x6DF6CC: fstp    [esp+0F0h+var_C8]
0x6DF6D0: jz      loc_6DF779
0x6DF6D6: sub     eax, 1
0x6DF6D9: jz      short loc_6DF71F
0x6DF6DB: sub     eax, 1
0x6DF6DE: jnz     loc_6DF7B5
0x6DF6E4: fld     [esp+0F0h+var_D0]
0x6DF6E8: fstp    [esp+0F0h+var_AC]
0x6DF6EC: fld     [esp+0F0h+var_CC]
0x6DF6F0: fstp    [esp+0F0h+var_A0]
0x6DF6F4: fld     [esp+0F0h+var_C8]
0x6DF6F8: fstp    [esp+0F0h+var_94]
0x6DF6FC: fstp    [esp+0F0h+var_A8]
0x6DF700: fxch    st(1)
0x6DF702: fstp    [esp+0F0h+var_9C]
0x6DF706: fstp    [esp+0F0h+var_90]
0x6DF70A: fld     [esp+0F0h+var_C4]
0x6DF70E: fstp    [esp+0F0h+var_A4]
0x6DF712: fstp    [esp+0F0h+var_98]
0x6DF716: fstp    [esp+0F0h+var_8C]
0x6DF71A: jmp     loc_6DF7BF
0x6DF71F: fld     [esp+0F0h+var_D0]
0x6DF723: fstp    [esp+0F0h+var_AC]
0x6DF727: fld     [esp+0F0h+var_CC]
0x6DF72B: fstp    [esp+0F0h+var_A0]
0x6DF72F: fld     [esp+0F0h+var_C8]
0x6DF733: fstp    [esp+0F0h+var_94]
0x6DF737: fld     [esp+0F0h+var_C4]
0x6DF73B: fstp    [esp+0F0h+var_A8]
0x6DF73F: fxch    st(3)
0x6DF741: fstp    [esp+0F0h+var_9C]
0x6DF745: fxch    st(3)
0x6DF747: fstp    [esp+0F0h+var_90]
0x6DF74B: fxch    st(1)
0x6DF74D: fchs
0x6DF74F: fstp    [esp+0F0h+var_DC]
0x6DF753: fchs
0x6DF755: fstp    [esp+0F0h+var_D8]
0x6DF759: fchs
0x6DF75B: fstp    [esp+0F0h+var_D4]
0x6DF75F: fld     [esp+0F0h+var_DC]
0x6DF763: fstp    [esp+0F0h+var_A4]
0x6DF767: fld     [esp+0F0h+var_D8]
0x6DF76B: fstp    [esp+0F0h+var_98]
0x6DF76F: fld     [esp+0F0h+var_D4]
0x6DF773: fstp    [esp+0F0h+var_8C]
0x6DF777: jmp     short loc_6DF7BF
0x6DF779: fld     [esp+0F0h+var_C4]
0x6DF77D: fstp    [esp+0F0h+var_AC]
0x6DF781: fxch    st(3)
0x6DF783: fstp    [esp+0F0h+var_A0]
0x6DF787: fxch    st(3)
0x6DF789: fstp    [esp+0F0h+var_94]
0x6DF78D: fxch    st(1)
0x6DF78F: fstp    [esp+0F0h+var_A8]
0x6DF793: fstp    [esp+0F0h+var_9C]
0x6DF797: fstp    [esp+0F0h+var_90]
0x6DF79B: fld     [esp+0F0h+var_D0]
0x6DF79F: fchs
0x6DF7A1: fstp    [esp+0F0h+var_DC]
0x6DF7A5: fld     [esp+0F0h+var_CC]
0x6DF7A9: fchs
0x6DF7AB: fstp    [esp+0F0h+var_D8]
0x6DF7AF: fld     [esp+0F0h+var_C8]
0x6DF7B3: jmp     short loc_6DF759
0x6DF7B5: fstp    st(2)
0x6DF7B7: fstp    st
0x6DF7B9: fstp    st
0x6DF7BB: fstp    st(1)
0x6DF7BD: fstp    st
0x6DF7BF: lea     edx, [esp+0F0h+var_AC]
0x6DF7C3: push    edx
0x6DF7C4: lea     eax, [esp+0F4h+var_48]
0x6DF7CB: push    eax
0x6DF7CC: lea     ecx, [esp+0F8h+var_6C]
0x6DF7D3: call    sub_710490
0x6DF7D8: mov     ecx, 9
0x6DF7DD: mov     esi, eax
0x6DF7DF: lea     edi, [esp+0F0h+var_AC]
0x6DF7E3: rep movsd
0x6DF7E5: mov     ecx, [ebx+3Ch]
0x6DF7E8: test    ecx, ecx
0x6DF7EA: jz      short loc_6DF862
0x6DF7EC: mov     edx, [ecx]
0x6DF7EE: fld     [esp+0F0h+arg_0]
0x6DF7F5: mov     edx, [edx+5Ch]
0x6DF7F8: lea     eax, [esp+0F0h+var_E0]
0x6DF7FC: push    eax
0x6DF7FD: mov     eax, [esp+0F4h+arg_4]
0x6DF804: push    eax
0x6DF805: push    ecx
0x6DF806: fstp    [esp+0FCh+var_FC]
0x6DF809: call    edx
0x6DF80B: test    al, al
0x6DF80D: jnz     short loc_6DF826
0x6DF80F: lea     ecx, [ebx+18h]
0x6DF812: call    sub_6C34D0
0x6DF817: pop     edi
0x6DF818: pop     esi
0x6DF819: pop     ebp
0x6DF81A: xor     al, al
0x6DF81C: pop     ebx
0x6DF81D: add     esp, 0E0h
0x6DF823: retn    0Ch
0x6DF826: fld     [esp+0F0h+var_E0]
0x6DF82A: push    ecx
0x6DF82B: fchs
0x6DF82D: lea     ecx, [esp+0F4h+var_48]
0x6DF834: fstp    [esp+0F4h+var_F4]; float
0x6DF837: call    NiMatrix33_InitRotationTransform
0x6DF83C: lea     eax, [esp+0F0h+var_48]
0x6DF843: push    eax
0x6DF844: lea     ecx, [esp+0F4h+var_24]
0x6DF84B: push    ecx
0x6DF84C: lea     ecx, [esp+0F8h+var_AC]
0x6DF850: call    NiMAtrix33_Multiply
0x6DF855: mov     ecx, 9
0x6DF85A: mov     esi, eax
0x6DF85C: lea     edi, [esp+0F0h+var_AC]
0x6DF860: rep movsd
0x6DF862: lea     edx, [esp+0F0h+var_AC]
0x6DF866: push    edx
0x6DF867: lea     ecx, [esp+0F4h+var_7C]
0x6DF86B: call    sub_7150F0
0x6DF870: lea     eax, [esp+0F0h+var_7C]
0x6DF874: lea     esi, [ebx+18h]
0x6DF877: push    eax
0x6DF878: mov     ecx, esi
0x6DF87A: call    sub_471430
0x6DF87F: mov     ecx, [ebx+40h]
0x6DF882: test    ecx, ecx
0x6DF884: jz      short loc_6DF8E5
0x6DF886: mov     edx, [ecx]
0x6DF888: fld     [esp+0F0h+arg_0]
0x6DF88F: mov     edx, [edx+5Ch]
0x6DF892: lea     eax, [esp+0F0h+var_E0]
0x6DF896: push    eax
0x6DF897: mov     eax, [esp+0F4h+arg_4]
0x6DF89E: push    eax
0x6DF89F: push    ecx
0x6DF8A0: fstp    [esp+0FCh+var_FC]
0x6DF8A3: call    edx
0x6DF8A5: test    al, al
0x6DF8A7: jnz     short loc_6DF8D6
0x6DF8A9: fld     dword ptr ds:0A7DEB4h
0x6DF8AF: pop     edi
0x6DF8B0: fchs
0x6DF8B2: fstp    dword ptr [esi]
0x6DF8B4: fld     dword ptr ds:0A7DEB4h
0x6DF8BA: fchs
0x6DF8BC: fstp    dword ptr [esi+10h]
0x6DF8BF: fld     dword ptr ds:0A7DEB4h
0x6DF8C5: fchs
0x6DF8C7: fstp    dword ptr [esi+1Ch]
0x6DF8CA: pop     esi
0x6DF8CB: pop     ebp
0x6DF8CC: pop     ebx
0x6DF8CD: add     esp, 0E0h
0x6DF8D3: retn    0Ch
0x6DF8D6: fld     [esp+0F0h+var_E0]
0x6DF8DA: push    ecx
0x6DF8DB: mov     ecx, esi
0x6DF8DD: fstp    [esp+0F4h+var_F4]; float
0x6DF8E0: call    sub_471560
0x6DF8E5: mov     ecx, esi
0x6DF8E7: call    sub_6CBC10
0x6DF8EC: test    al, al
0x6DF8EE: jz      short loc_6DF926
0x6DF8F0: fld     dword ptr ds:0A7DEB4h
0x6DF8F6: mov     eax, [esp+0F0h+arg_8]
0x6DF8FD: fchs
0x6DF8FF: pop     edi
0x6DF900: fstp    dword ptr [eax]
0x6DF902: pop     esi
0x6DF903: fld     dword ptr ds:0A7DEB4h
0x6DF909: pop     ebp
0x6DF90A: fchs
0x6DF90C: pop     ebx
0x6DF90D: fstp    dword ptr [eax+10h]
0x6DF910: fld     dword ptr ds:0A7DEB4h
0x6DF916: fchs
0x6DF918: fstp    dword ptr [eax+1Ch]
0x6DF91B: xor     al, al
0x6DF91D: add     esp, 0E0h
0x6DF923: retn    0Ch
0x6DF926: mov     edi, [esp+0F0h+arg_8]
0x6DF92D: fld     [esp+0F0h+arg_0]
0x6DF934: mov     ecx, 8
0x6DF939: rep movsd
0x6DF93B: fstp    dword ptr [ebx+8]
0x6DF93E: pop     edi
0x6DF93F: pop     esi
0x6DF940: pop     ebp
0x6DF941: mov     al, 1
0x6DF943: pop     ebx
0x6DF944: add     esp, 0E0h
0x6DF94A: retn    0Ch
