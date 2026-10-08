0x6034B0: push    esi; ODismemberment: Oblivion health-damage kill gate. xOBSE already hooks inside this function at 0x6034CB; avoid competing patch here until hook strategy is finalized.
0x6034B1: mov     esi, ecx
0x6034B3: mov     eax, [esi]
0x6034B5: mov     edx, [eax+198h]
0x6034BB: push    0
0x6034BD: call    edx
0x6034BF: test    al, al
0x6034C1: jnz     short Actor_OnHealthDamage___Done
0x6034C3: mov     eax, [esi]
0x6034C5: mov     edx, [eax+288h]
0x6034CB: push    8
0x6034CD: mov     ecx, esi
0x6034CF: call    edx
0x6034D1: fcomp   dword ptr ds:0A2F948h
0x6034D7: fnstsw  ax
0x6034D9: test    ah, 5
0x6034DC: jp      short Actor_OnHealthDamage___Done; 3DTheft decode 2026-05-14: Actor_OnHealthDamage checks current health through GetAV_F(Health=8) and kills when below 1; plugin monitors actor health to force flee again before death.
0x6034DE: fld     dword ptr [esp+0Ch]
0x6034E2: mov     eax, [esp+0Ch+var_4]
0x6034E6: push    ecx
0x6034E7: fstp    [esp+10h+var_10]; int
0x6034EA: push    eax; int
0x6034EB: mov     ecx, esi; int
0x6034ED: call    Actor_Kill; ODismemberment: candidate future death/kill integration point after visual/state pipeline is stable.
