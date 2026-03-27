0x476410: sub     esp, 154h
0x476416: mov     eax, ds:0B30AACh
0x47641B: xor     eax, esp
0x47641D: mov     [esp+154h+var_4], eax
0x476424: push    ebx
0x476425: push    ebp
0x476426: mov     ebp, [esp+15Ch+arg_0]
0x47642D: push    esi
0x47642E: xor     ebx, ebx
0x476430: cmp     ebp, ebx
0x476432: mov     esi, ecx
0x476434: mov     [esp+160h+var_124], esi
0x476438: mov     [esp+160h+var_13C], ebp
0x47643C: jz      loc_476CDB
0x476442: mov     eax, [ebp+0]
0x476445: mov     edx, [eax+190h]
0x47644B: mov     ecx, ebp
0x47644D: call    edx
0x47644F: test    al, al
0x476451: jz      loc_476CDB
0x476457: cmp     [esi+98h], ebx
0x47645D: jnz     short loc_47646A
0x47645F: mov     [esi+0C8h], ebp
0x476465: jmp     loc_476CDB
0x47646A: mov     ecx, [ebp+58h]
0x47646D: mov     eax, [ecx]
0x47646F: mov     edx, [eax+0ECh]
0x476475: push    edi
0x476476: mov     edi, 11h
0x47647B: push    1
0x47647D: mov     [esp+168h+var_144], edi
0x476481: mov     [esp+168h+var_148], 1
0x476489: call    edx
0x47648B: cmp     eax, ebx
0x47648D: jz      short loc_4764C8
0x47648F: mov     eax, [eax+8]
0x476492: cmp     eax, ebx
0x476494: jz      short loc_4764C8
0x476496: movsx   eax, byte ptr [eax+90h]
0x47649D: cmp     eax, 3; switch 4 cases
0x4764A0: mov     ecx, ds:0B086B8h[eax*4]
0x4764A7: mov     [esp+168h+var_14C], ecx
0x4764AB: ja      def_4764B1
0x4764B1: jmp     ds:jpt_4764B1[eax*4]; switch jump
0x4764B8: mov     edi, 0Eh; jumptable 004764B1 cases 0,1
0x4764BD: jmp     short loc_4764C4
0x4764BF: mov     edi, 10h; jumptable 004764B1 cases 2,3
0x4764C4: mov     [esp+168h+var_148], edi
0x4764C8: mov     ecx, ds:0B333C4h; this
0x4764CE: cmp     ebp, ecx
0x4764D0: jnz     short loc_4764E5
0x4764D2: push    1; a2
0x4764D4: call    Player_GetAnimData
0x4764D9: cmp     esi, eax
0x4764DB: jnz     short loc_4764E5
0x4764DD: mov     esi, ds:0B36BB8h
0x4764E3: jmp     short loc_4764FD
0x4764E5: mov     edx, [ebp+0]
0x4764E8: mov     eax, [edx+170h]
0x4764EE: mov     ecx, ebp
0x4764F0: call    eax
0x4764F2: push    eax
0x4764F3: call    GetFormModelPAth
0x4764F8: add     esp, 4
0x4764FB: mov     esi, eax
0x4764FD: cmp     esi, ebx
0x4764FF: jz      def_4764B1
0x476505: push    edi
0x476506: mov     ecx, ebp
0x476508: call    Actor_GetSkillMasteryLevel
0x47650D: push    8; Size
0x47650F: mov     [esp+16Ch+var_124], eax
0x476513: call    FormHeapAlloc
0x476518: add     esp, 4
0x47651B: cmp     eax, ebx
0x47651D: jz      short loc_47652A
0x47651F: mov     [eax], ebx
0x476521: mov     [eax+4], ebx
0x476524: mov     [esp+168h+var_144], eax
0x476528: jmp     short loc_47652E
0x47652A: mov     [esp+168h+var_144], ebx
0x47652E: lea     edx, [esp+168h+Str]
0x476532: mov     eax, esi
0x476534: sub     edx, esi
0x476536: mov     cl, [eax]
0x476538: mov     [edx+eax], cl
0x47653B: add     eax, 1
0x47653E: cmp     cl, bl
0x476540: jnz     short loc_476536
0x476542: lea     ecx, [esp+168h+Str]
0x476546: push    5Ch ; '\'; Ch
0x476548: push    ecx; Str
0x476549: call    _strrchr
0x47654E: mov     ebp, eax
0x476550: add     esp, 8
0x476553: cmp     ebp, ebx
0x476555: jz      def_4764B1
0x47655B: mov     eax, 2
0x476560: mov     [esp+168h+var_158], 31h ; '1'
0x476565: mov     [esp+168h+var_157], bl
0x476569: mov     [esp+168h+var_120], 1
0x476571: mov     [esp+168h+var_11C], eax
0x476575: mov     [esp+168h+var_118], eax
0x476579: mov     [esp+168h+var_114], 3
0x476581: mov     [esp+168h+var_110], 4
0x476589: mov     [esp+168h+var_13C], 16h
0x476591: mov     [esp+168h+var_138], 19h
0x476599: mov     [esp+168h+var_134], 1Ah
0x4765A1: mov     [esp+168h+var_130], 18h
0x4765A9: mov     [esp+168h+var_12C], 17h
0x4765B1: mov     [esp+168h+var_150], offset off_B102B8
0x4765B9: lea     esp, [esp+0]
0x4765C0: mov     [esp+168h+var_154], ebx
0x4765C4: mov     edx, [esp+168h+var_124]
0x4765C8: mov     eax, [esp+168h+var_154]
0x4765CC: cmp     [esp+eax+168h+var_110], edx
0x4765D0: jg      loc_476969
0x4765D6: mov     ecx, [esp+168h+var_148]
0x4765DA: mov     eax, ecx
0x4765DC: sub     eax, 0Eh
0x4765DF: jz      loc_476709
0x4765E5: sub     eax, 2
0x4765E8: jnz     loc_476825
0x4765EE: mov     ecx, [esp+168h+var_150]
0x4765F2: mov     ecx, [ecx]
0x4765F4: lea     edx, [ebp+1]
0x4765F7: mov     al, [ecx]
0x4765F9: mov     [edx], al
0x4765FB: add     ecx, 1
0x4765FE: add     edx, 1
0x476601: cmp     al, bl
0x476603: jnz     short loc_4765F7
0x476605: mov     edx, [esp+168h+var_14C]
0x476609: mov     eax, ds:0B102C8h[edx*4]
0x476610: mov     ecx, eax
0x476612: mov     dl, [eax]
0x476614: add     eax, 1
0x476617: cmp     dl, bl
0x476619: jnz     short loc_476612
0x47661B: mov     edi, ebp
0x47661D: sub     eax, ecx
0x47661F: mov     esi, ecx
0x476621: add     edi, 0FFFFFFFFh
0x476624: mov     cl, [edi+1]
0x476627: add     edi, 1
0x47662A: cmp     cl, bl
0x47662C: jnz     short loc_476624
0x47662E: mov     ecx, eax
0x476630: shr     ecx, 2
0x476633: rep movsd
0x476635: mov     ecx, eax
0x476637: and     ecx, 3
0x47663A: mov     eax, ebp
0x47663C: rep movsb
0x47663E: add     eax, 0FFFFFFFFh
0x476641: mov     cl, [eax+1]
0x476644: add     eax, 1
0x476647: cmp     cl, bl
0x476649: jnz     short loc_476641
0x47664B: mov     ecx, ds:0A3CB24h
0x476651: mov     [eax], ecx
0x476653: mov     edx, ds:0A3CB28h
0x476659: mov     [eax+4], edx
0x47665C: mov     cx, ds:0A3CB2Ch
0x476663: mov     [eax+8], cx
0x476667: mov     dl, ds:0A3CB2Eh
0x47666D: mov     [eax+0Ah], dl
0x476670: mov     eax, [esp+168h+var_154]
0x476674: mov     cl, byte ptr [esp+eax+168h+var_110]
0x476678: add     cl, 30h ; '0'
0x47667B: lea     eax, [esp+168h+var_158]
0x47667F: mov     [esp+168h+var_158], cl
0x476683: mov     ecx, eax
0x476685: mov     dl, [eax]
0x476687: add     eax, 1
0x47668A: cmp     dl, bl
0x47668C: jnz     short loc_476685
0x47668E: mov     edi, ebp
0x476690: sub     eax, ecx
0x476692: mov     esi, ecx
0x476694: add     edi, 0FFFFFFFFh
0x476697: mov     cl, [edi+1]
0x47669A: add     edi, 1
0x47669D: cmp     cl, bl
0x47669F: jnz     short loc_476697
0x4766A1: mov     edx, [esp+168h+var_154]
0x4766A5: mov     ecx, eax
0x4766A7: shr     ecx, 2
0x4766AA: rep movsd
0x4766AC: mov     ecx, eax
0x4766AE: mov     eax, [esp+edx+168h+var_12C]
0x4766B2: and     ecx, 3
0x4766B5: rep movsb
0x4766B7: lea     eax, [eax+eax*8]
0x4766BA: mov     eax, ds:0B102E0h[eax*4]
0x4766C1: mov     ecx, eax
0x4766C3: mov     dl, [eax]
0x4766C5: add     eax, 1
0x4766C8: cmp     dl, bl
0x4766CA: jnz     short loc_4766C3
0x4766CC: mov     edi, ebp
0x4766CE: sub     eax, ecx
0x4766D0: mov     esi, ecx
0x4766D2: add     edi, 0FFFFFFFFh
0x4766D5: mov     cl, [edi+1]
0x4766D8: add     edi, 1
0x4766DB: cmp     cl, bl
0x4766DD: jnz     short loc_4766D5
0x4766DF: mov     ecx, eax
0x4766E1: shr     ecx, 2
0x4766E4: rep movsd
0x4766E6: mov     ecx, eax
0x4766E8: and     ecx, 3
0x4766EB: rep movsb
0x4766ED: mov     edi, ebp
0x4766EF: add     edi, 0FFFFFFFFh
0x4766F2: mov     al, [edi+1]
0x4766F5: add     edi, 1
0x4766F8: cmp     al, bl
0x4766FA: jnz     short loc_4766F2
0x4766FC: mov     ecx, ds:0A3CB20h
0x476702: mov     [edi], ecx
0x476704: jmp     loc_47682A
0x476709: mov     edx, [esp+168h+var_150]
0x47670D: mov     ecx, [edx]
0x47670F: lea     edx, [ebp+1]
0x476712: mov     al, [ecx]
0x476714: mov     [edx], al
0x476716: add     ecx, 1
0x476719: add     edx, 1
0x47671C: cmp     al, bl
0x47671E: jnz     short loc_476712
0x476720: mov     eax, [esp+168h+var_14C]
0x476724: mov     eax, ds:0B102C8h[eax*4]
0x47672B: mov     ecx, eax
0x47672D: lea     ecx, [ecx+0]
0x476730: mov     dl, [eax]
0x476732: add     eax, 1
0x476735: cmp     dl, bl
0x476737: jnz     short loc_476730
0x476739: mov     edi, ebp
0x47673B: sub     eax, ecx
0x47673D: mov     esi, ecx
0x47673F: add     edi, 0FFFFFFFFh
0x476742: mov     cl, [edi+1]
0x476745: add     edi, 1
0x476748: cmp     cl, bl
0x47674A: jnz     short loc_476742
0x47674C: mov     ecx, eax
0x47674E: shr     ecx, 2
0x476751: rep movsd
0x476753: mov     ecx, eax
0x476755: and     ecx, 3
0x476758: mov     eax, ebp
0x47675A: rep movsb
0x47675C: add     eax, 0FFFFFFFFh
0x47675F: nop
0x476760: mov     cl, [eax+1]
0x476763: add     eax, 1
0x476766: cmp     cl, bl
0x476768: jnz     short loc_476760
0x47676A: mov     ecx, ds:0A3CB14h
0x476770: mov     [eax], ecx
0x476772: mov     edx, ds:0A3CB18h
0x476778: mov     [eax+4], edx
0x47677B: mov     cx, ds:0A3CB1Ch
0x476782: mov     [eax+8], cx
0x476786: mov     dl, ds:0A3CB1Eh
0x47678C: mov     [eax+0Ah], dl
0x47678F: mov     eax, [esp+168h+var_154]
0x476793: mov     cl, byte ptr [esp+eax+168h+var_110]
0x476797: add     cl, 30h ; '0'
0x47679A: lea     eax, [esp+168h+var_158]
0x47679E: mov     [esp+168h+var_158], cl
0x4767A2: mov     ecx, eax
0x4767A4: mov     dl, [eax]
0x4767A6: add     eax, 1
0x4767A9: cmp     dl, bl
0x4767AB: jnz     short loc_4767A4
0x4767AD: mov     edi, ebp
0x4767AF: sub     eax, ecx
0x4767B1: mov     esi, ecx
0x4767B3: add     edi, 0FFFFFFFFh
0x4767B6: mov     cl, [edi+1]
0x4767B9: add     edi, 1
0x4767BC: cmp     cl, bl
0x4767BE: jnz     short loc_4767B6
0x4767C0: mov     edx, [esp+168h+var_154]
0x4767C4: mov     ecx, eax
0x4767C6: shr     ecx, 2
0x4767C9: rep movsd
0x4767CB: mov     ecx, eax
0x4767CD: mov     eax, [esp+edx+168h+var_12C]
0x4767D1: and     ecx, 3
0x4767D4: rep movsb
0x4767D6: lea     eax, [eax+eax*8]
0x4767D9: mov     eax, ds:0B102E0h[eax*4]
0x4767E0: mov     ecx, eax
0x4767E2: mov     dl, [eax]
0x4767E4: add     eax, 1
0x4767E7: cmp     dl, bl
0x4767E9: jnz     short loc_4767E2
0x4767EB: mov     edi, ebp
0x4767ED: sub     eax, ecx
0x4767EF: mov     esi, ecx
0x4767F1: add     edi, 0FFFFFFFFh
0x4767F4: mov     cl, [edi+1]
0x4767F7: add     edi, 1
0x4767FA: cmp     cl, bl
0x4767FC: jnz     short loc_4767F4
0x4767FE: mov     ecx, eax
0x476800: shr     ecx, 2
0x476803: rep movsd
0x476805: mov     ecx, eax
0x476807: and     ecx, 3
0x47680A: rep movsb
0x47680C: mov     edi, ebp
0x47680E: add     edi, 0FFFFFFFFh
0x476811: mov     al, [edi+1]
0x476814: add     edi, 1
0x476817: cmp     al, bl
0x476819: jnz     short loc_476811
0x47681B: mov     ecx, ds:0A3CB20h
0x476821: mov     [edi], ecx
0x476823: jmp     short loc_47682A
0x476825: cmp     ecx, 11h
0x476828: jz      short loc_476842
0x47682A: mov     ecx, ds:0B33A1Ch
0x476830: lea     edx, [esp+168h+Str]
0x476834: push    edx
0x476835: call    sub_434870
0x47683A: test    eax, eax
0x47683C: jnz     loc_476C06
0x476842: mov     eax, [esp+168h+var_150]
0x476846: mov     ecx, [eax]
0x476848: lea     edx, [ebp+1]
0x47684B: jmp     short loc_476850
0x47684D: align 10h
0x476850: mov     al, [ecx]
0x476852: mov     [edx], al
0x476854: add     ecx, 1
0x476857: add     edx, 1
0x47685A: cmp     al, bl
0x47685C: jnz     short loc_476850
0x47685E: mov     ecx, [esp+168h+var_14C]
0x476862: mov     eax, ds:0B102C8h[ecx*4]
0x476869: mov     ecx, eax
0x47686B: jmp     short loc_476870
0x47686D: align 10h
0x476870: mov     dl, [eax]
0x476872: add     eax, 1
0x476875: cmp     dl, bl
0x476877: jnz     short loc_476870
0x476879: mov     edi, ebp
0x47687B: sub     eax, ecx
0x47687D: mov     esi, ecx
0x47687F: add     edi, 0FFFFFFFFh
0x476882: mov     cl, [edi+1]
0x476885: add     edi, 1
0x476888: cmp     cl, bl
0x47688A: jnz     short loc_476882
0x47688C: mov     ecx, eax
0x47688E: shr     ecx, 2
0x476891: rep movsd
0x476893: mov     ecx, eax
0x476895: and     ecx, 3
0x476898: mov     eax, ebp
0x47689A: rep movsb
0x47689C: add     eax, 0FFFFFFFFh
0x47689F: nop
0x4768A0: mov     cl, [eax+1]
0x4768A3: add     eax, 1
0x4768A6: cmp     cl, bl
0x4768A8: jnz     short loc_4768A0
0x4768AA: mov     edx, ds:0A3CB0Ch
0x4768B0: mov     [eax], edx
0x4768B2: mov     cx, ds:0A3CB10h
0x4768B9: mov     edx, [esp+168h+var_154]
0x4768BD: mov     [eax+4], cx
0x4768C1: mov     al, byte ptr [esp+edx+168h+var_110]
0x4768C5: add     al, 30h ; '0'
0x4768C7: mov     [esp+168h+var_158], al
0x4768CB: lea     eax, [esp+168h+var_158]
0x4768CF: mov     ecx, eax
0x4768D1: mov     dl, [eax]
0x4768D3: add     eax, 1
0x4768D6: cmp     dl, bl
0x4768D8: jnz     short loc_4768D1
0x4768DA: mov     edi, ebp
0x4768DC: sub     eax, ecx
0x4768DE: mov     esi, ecx
0x4768E0: add     edi, 0FFFFFFFFh
0x4768E3: mov     cl, [edi+1]
0x4768E6: add     edi, 1
0x4768E9: cmp     cl, bl
0x4768EB: jnz     short loc_4768E3
0x4768ED: mov     ecx, eax
0x4768EF: shr     ecx, 2
0x4768F2: rep movsd
0x4768F4: mov     ecx, eax
0x4768F6: and     ecx, 3
0x4768F9: rep movsb
0x4768FB: mov     ecx, [esp+168h+var_154]
0x4768FF: mov     eax, [esp+ecx+168h+var_12C]
0x476903: lea     edx, [eax+eax*8]
0x476906: mov     eax, ds:0B102E0h[edx*4]
0x47690D: mov     ecx, eax
0x47690F: nop
0x476910: mov     dl, [eax]
0x476912: add     eax, 1
0x476915: cmp     dl, bl
0x476917: jnz     short loc_476910
0x476919: mov     edi, ebp
0x47691B: sub     eax, ecx
0x47691D: mov     esi, ecx
0x47691F: add     edi, 0FFFFFFFFh
0x476922: mov     cl, [edi+1]
0x476925: add     edi, 1
0x476928: cmp     cl, bl
0x47692A: jnz     short loc_476922
0x47692C: mov     ecx, eax
0x47692E: shr     ecx, 2
0x476931: rep movsd
0x476933: mov     ecx, eax
0x476935: and     ecx, 3
0x476938: rep movsb
0x47693A: mov     edi, ebp
0x47693C: add     edi, 0FFFFFFFFh
0x47693F: nop
0x476940: mov     al, [edi+1]
0x476943: add     edi, 1
0x476946: cmp     al, bl
0x476948: jnz     short loc_476940
0x47694A: mov     eax, ds:0A3CB20h
0x47694F: lea     ecx, [esp+168h+Str]
0x476953: mov     [edi], eax
0x476955: push    ecx
0x476956: mov     ecx, ds:0B33A1Ch
0x47695C: call    sub_434870
0x476961: test    eax, eax
0x476963: jnz     loc_476C06
0x476969: mov     ecx, [esp+168h+var_148]
0x47696D: mov     eax, ecx
0x47696F: sub     eax, 0Eh
0x476972: jz      loc_476A57
0x476978: sub     eax, 2
0x47697B: jnz     loc_476B24
0x476981: mov     edx, [esp+168h+var_150]
0x476985: mov     ecx, [edx]
0x476987: lea     edx, [ebp+1]
0x47698A: lea     ebx, [ebx+0]
0x476990: mov     al, [ecx]
0x476992: mov     [edx], al
0x476994: add     ecx, 1
0x476997: add     edx, 1
0x47699A: cmp     al, bl
0x47699C: jnz     short loc_476990
0x47699E: mov     eax, [esp+168h+var_14C]
0x4769A2: mov     eax, ds:0B102C8h[eax*4]
0x4769A9: mov     ecx, eax
0x4769AB: jmp     short loc_4769B0
0x4769AD: align 10h
0x4769B0: mov     dl, [eax]
0x4769B2: add     eax, 1
0x4769B5: cmp     dl, bl
0x4769B7: jnz     short loc_4769B0
0x4769B9: mov     edi, ebp
0x4769BB: sub     eax, ecx
0x4769BD: mov     esi, ecx
0x4769BF: add     edi, 0FFFFFFFFh
0x4769C2: mov     cl, [edi+1]
0x4769C5: add     edi, 1
0x4769C8: cmp     cl, bl
0x4769CA: jnz     short loc_4769C2
0x4769CC: mov     ecx, eax
0x4769CE: shr     ecx, 2
0x4769D1: rep movsd
0x4769D3: mov     ecx, eax
0x4769D5: and     ecx, 3
0x4769D8: mov     eax, ebp
0x4769DA: rep movsb
0x4769DC: add     eax, 0FFFFFFFFh
0x4769DF: nop
0x4769E0: mov     cl, [eax+1]
0x4769E3: add     eax, 1
0x4769E6: cmp     cl, bl
0x4769E8: jnz     short loc_4769E0
0x4769EA: mov     ecx, ds:0A3CB04h
0x4769F0: mov     [eax], ecx
0x4769F2: mov     dx, ds:0A3CB08h
0x4769F9: mov     [eax+4], dx
0x4769FD: mov     eax, [esp+168h+var_154]
0x476A01: mov     eax, [esp+eax+168h+var_12C]
0x476A05: lea     ecx, [eax+eax*8]
0x476A08: mov     eax, ds:0B102E0h[ecx*4]
0x476A0F: mov     ecx, eax
0x476A11: mov     dl, [eax]
0x476A13: add     eax, 1
0x476A16: cmp     dl, bl
0x476A18: jnz     short loc_476A11
0x476A1A: mov     edi, ebp
0x476A1C: sub     eax, ecx
0x476A1E: mov     esi, ecx
0x476A20: add     edi, 0FFFFFFFFh
0x476A23: mov     cl, [edi+1]
0x476A26: add     edi, 1
0x476A29: cmp     cl, bl
0x476A2B: jnz     short loc_476A23
0x476A2D: mov     ecx, eax
0x476A2F: shr     ecx, 2
0x476A32: rep movsd
0x476A34: mov     ecx, eax
0x476A36: and     ecx, 3
0x476A39: rep movsb
0x476A3B: mov     edi, ebp
0x476A3D: add     edi, 0FFFFFFFFh
0x476A40: mov     al, [edi+1]
0x476A43: add     edi, 1
0x476A46: cmp     al, bl
0x476A48: jnz     short loc_476A40
0x476A4A: mov     edx, ds:0A3CB20h
0x476A50: mov     [edi], edx
0x476A52: jmp     loc_476B29
0x476A57: mov     eax, [esp+168h+var_150]
0x476A5B: mov     ecx, [eax]
0x476A5D: lea     edx, [ebp+1]
0x476A60: mov     al, [ecx]
0x476A62: mov     [edx], al
0x476A64: add     ecx, 1
0x476A67: add     edx, 1
0x476A6A: cmp     al, bl
0x476A6C: jnz     short loc_476A60
0x476A6E: mov     ecx, [esp+168h+var_14C]
0x476A72: mov     eax, ds:0B102C8h[ecx*4]
0x476A79: mov     ecx, eax
0x476A7B: jmp     short loc_476A80
0x476A7D: align 10h
0x476A80: mov     dl, [eax]
0x476A82: add     eax, 1
0x476A85: cmp     dl, bl
0x476A87: jnz     short loc_476A80
0x476A89: mov     edi, ebp
0x476A8B: sub     eax, ecx
0x476A8D: mov     esi, ecx
0x476A8F: add     edi, 0FFFFFFFFh
0x476A92: mov     cl, [edi+1]
0x476A95: add     edi, 1
0x476A98: cmp     cl, bl
0x476A9A: jnz     short loc_476A92
0x476A9C: mov     ecx, eax
0x476A9E: shr     ecx, 2
0x476AA1: rep movsd
0x476AA3: mov     ecx, eax
0x476AA5: and     ecx, 3
0x476AA8: mov     eax, ebp
0x476AAA: rep movsb
0x476AAC: add     eax, 0FFFFFFFFh
0x476AAF: nop
0x476AB0: mov     cl, [eax+1]
0x476AB3: add     eax, 1
0x476AB6: cmp     cl, bl
0x476AB8: jnz     short loc_476AB0
0x476ABA: mov     edx, ds:0A3CAFCh
0x476AC0: mov     [eax], edx
0x476AC2: mov     cx, ds:0A3CB00h
0x476AC9: mov     edx, [esp+168h+var_154]
0x476ACD: mov     [eax+4], cx
0x476AD1: mov     eax, [esp+edx+168h+var_12C]
0x476AD5: lea     eax, [eax+eax*8]
0x476AD8: mov     eax, ds:0B102E0h[eax*4]
0x476ADF: mov     ecx, eax
0x476AE1: mov     dl, [eax]
0x476AE3: add     eax, 1
0x476AE6: cmp     dl, bl
0x476AE8: jnz     short loc_476AE1
0x476AEA: mov     edi, ebp
0x476AEC: sub     eax, ecx
0x476AEE: mov     esi, ecx
0x476AF0: add     edi, 0FFFFFFFFh
0x476AF3: mov     cl, [edi+1]
0x476AF6: add     edi, 1
0x476AF9: cmp     cl, bl
0x476AFB: jnz     short loc_476AF3
0x476AFD: mov     ecx, eax
0x476AFF: shr     ecx, 2
0x476B02: rep movsd
0x476B04: mov     ecx, eax
0x476B06: and     ecx, 3
0x476B09: rep movsb
0x476B0B: mov     edi, ebp
0x476B0D: add     edi, 0FFFFFFFFh
0x476B10: mov     al, [edi+1]
0x476B13: add     edi, 1
0x476B16: cmp     al, bl
0x476B18: jnz     short loc_476B10
0x476B1A: mov     ecx, ds:0A3CB20h
0x476B20: mov     [edi], ecx
0x476B22: jmp     short loc_476B29
0x476B24: cmp     ecx, 11h
0x476B27: jz      short loc_476B41
0x476B29: mov     ecx, ds:0B33A1Ch
0x476B2F: lea     edx, [esp+168h+Str]
0x476B33: push    edx
0x476B34: call    sub_434870
0x476B39: test    eax, eax
0x476B3B: jnz     loc_476C06
0x476B41: mov     eax, [esp+168h+var_150]
0x476B45: mov     ecx, [eax]
0x476B47: lea     edx, [ebp+1]
0x476B4A: lea     ebx, [ebx+0]
0x476B50: mov     al, [ecx]
0x476B52: mov     [edx], al
0x476B54: add     ecx, 1
0x476B57: add     edx, 1
0x476B5A: cmp     al, bl
0x476B5C: jnz     short loc_476B50
0x476B5E: mov     ecx, [esp+168h+var_14C]
0x476B62: mov     eax, ds:0B102C8h[ecx*4]
0x476B69: mov     ecx, eax
0x476B6B: jmp     short loc_476B70
0x476B6D: align 10h
0x476B70: mov     dl, [eax]
0x476B72: add     eax, 1
0x476B75: cmp     dl, bl
0x476B77: jnz     short loc_476B70
0x476B79: mov     edi, ebp
0x476B7B: sub     eax, ecx
0x476B7D: mov     esi, ecx
0x476B7F: add     edi, 0FFFFFFFFh
0x476B82: mov     cl, [edi+1]
0x476B85: add     edi, 1
0x476B88: cmp     cl, bl
0x476B8A: jnz     short loc_476B82
0x476B8C: mov     edx, [esp+168h+var_154]
0x476B90: mov     ecx, eax
0x476B92: shr     ecx, 2
0x476B95: rep movsd
0x476B97: mov     ecx, eax
0x476B99: mov     eax, [esp+edx+168h+var_12C]
0x476B9D: and     ecx, 3
0x476BA0: rep movsb
0x476BA2: lea     eax, [eax+eax*8]
0x476BA5: mov     eax, ds:0B102E0h[eax*4]
0x476BAC: mov     ecx, eax
0x476BAE: mov     edi, edi
0x476BB0: mov     dl, [eax]
0x476BB2: add     eax, 1
0x476BB5: cmp     dl, bl
0x476BB7: jnz     short loc_476BB0
0x476BB9: mov     edi, ebp
0x476BBB: sub     eax, ecx
0x476BBD: mov     esi, ecx
0x476BBF: add     edi, 0FFFFFFFFh
0x476BC2: mov     cl, [edi+1]
0x476BC5: add     edi, 1
0x476BC8: cmp     cl, bl
0x476BCA: jnz     short loc_476BC2
0x476BCC: mov     ecx, eax
0x476BCE: shr     ecx, 2
0x476BD1: rep movsd
0x476BD3: mov     ecx, eax
0x476BD5: and     ecx, 3
0x476BD8: rep movsb
0x476BDA: mov     edi, ebp
0x476BDC: add     edi, 0FFFFFFFFh
0x476BDF: nop
0x476BE0: mov     al, [edi+1]
0x476BE3: add     edi, 1
0x476BE6: cmp     al, bl
0x476BE8: jnz     short loc_476BE0
0x476BEA: mov     ecx, ds:0A3CB20h
0x476BF0: lea     edx, [esp+168h+Str]
0x476BF4: mov     [edi], ecx
0x476BF6: mov     ecx, ds:0B33A1Ch
0x476BFC: push    edx
0x476BFD: call    sub_434870
0x476C02: test    eax, eax
0x476C04: jz      short loc_476C47
0x476C06: lea     eax, [esp+168h+Str]
0x476C0A: lea     edx, [eax+1]
0x476C0D: lea     ecx, [ecx+0]
0x476C10: mov     cl, [eax]
0x476C12: add     eax, 1
0x476C15: cmp     cl, bl
0x476C17: jnz     short loc_476C10
0x476C19: sub     eax, edx
0x476C1B: add     eax, 1
0x476C1E: push    eax; Size
0x476C1F: call    FormHeapAlloc
0x476C24: lea     ecx, [esp+16Ch+Str]
0x476C28: mov     esi, eax
0x476C2A: mov     edx, ecx
0x476C2C: add     esp, 4
0x476C2F: sub     esi, edx
0x476C31: mov     dl, [ecx]
0x476C33: mov     [esi+ecx], dl
0x476C36: add     ecx, 1
0x476C39: cmp     dl, bl
0x476C3B: jnz     short loc_476C31
0x476C3D: mov     ecx, [esp+168h+var_144]
0x476C41: push    eax
0x476C42: call    BSSimpleList_PushBack
0x476C47: mov     eax, [esp+168h+var_154]
0x476C4B: sub     eax, 4
0x476C4E: cmp     eax, 0FFFFFFF0h
0x476C51: mov     [esp+168h+var_154], eax
0x476C55: jge     loc_4765C4
0x476C5B: mov     eax, [esp+168h+var_150]
0x476C5F: add     eax, 4
0x476C62: cmp     eax, offset off_B102C8
0x476C67: mov     [esp+168h+var_150], eax
0x476C6B: jl      loc_4765C0
0x476C71: mov     eax, [esp+168h+var_144]
0x476C75: mov     edi, [esp+168h+var_128]
0x476C79: push    eax; int
0x476C7A: mov     ecx, edi; this
0x476C7C: call    sub_4761C0
0x476C81: cmp     byte ptr [esp+168h+arg_0], bl
0x476C88: mov     esi, [esp+168h+var_140]
0x476C8C: jnz     short loc_476CA8
0x476C8E: fld     dword ptr ds:0A30634h
0x476C94: sub     esp, 8
0x476C97: fstp    [esp+170h+var_16C]; float
0x476C9B: mov     ecx, edi; this
0x476C9D: fldz
0x476C9F: fstp    [esp+170h+var_170]; float
0x476CA2: push    esi; int
0x476CA3: call    sub_476D10
0x476CA8: mov     ecx, ds:0B33B00h
0x476CAE: call    sub_45A500
0x476CB3: test    al, al
0x476CB5: jnz     short def_4764B1
0x476CB7: mov     edx, [esi]
0x476CB9: mov     eax, [edx+330h]
0x476CBF: mov     ecx, esi
0x476CC1: call    eax
0x476CC3: test    eax, eax
0x476CC5: jz      short def_4764B1
0x476CC7: mov     edx, [esi]
0x476CC9: mov     eax, [edx+330h]
0x476CCF: mov     ecx, esi
0x476CD1: call    eax
0x476CD3: mov     ecx, eax
0x476CD5: call    sub_61E8A0
