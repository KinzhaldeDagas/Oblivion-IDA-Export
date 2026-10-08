void sub_828280()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  unsigned int *v4; // eax
  NiD3DTextureStage *v5; // eax
  unsigned int **v6; // ebp
  NiD3DTextureStage *v7; // eax
  unsigned int **v8; // ebp
  NiD3DTextureStage *v9; // eax
  unsigned int **v10; // ebp
  NiD3DTextureStage *v11; // eax
  unsigned int **v12; // ebp
  NiD3DTextureStage *v13; // eax
  unsigned int **v14; // ebp
  NiD3DTextureStage *v15; // eax
  unsigned int **v16; // ebp
  NiD3DTextureStage *v17; // eax
  unsigned int **v18; // ebp
  NiD3DTextureStage *v19; // eax
  NiD3DVertexShader *VertexShader; // ebp
  int v21; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v23; // ebx
  unsigned int **v24; // ebp
  NiD3DTextureStage *v25; // eax
  unsigned int **v26; // ebp
  NiD3DTextureStage *v27; // eax
  unsigned int **v28; // ebp
  NiD3DTextureStage *v29; // eax
  unsigned int **v30; // ebp
  NiD3DTextureStage *v31; // eax
  unsigned int **v32; // ebp
  NiD3DTextureStage *v33; // eax
  unsigned int **v34; // ebp
  NiD3DTextureStage *v35; // eax
  unsigned int **v36; // ebp
  NiD3DTextureStage *v37; // eax
  unsigned int **v38; // ebp
  NiD3DTextureStage *v39; // eax
  NiD3DVertexShader *v40; // ebp
  int v41; // ebx
  NiD3DPixelShader *v42; // ebp
  int v43; // ebx
  unsigned int **v44; // ebp
  NiD3DTextureStage *v45; // eax
  unsigned int **v46; // ebp
  NiD3DTextureStage *v47; // eax
  unsigned int **v48; // ebp
  NiD3DTextureStage *v49; // eax
  unsigned int **v50; // ebp
  NiD3DTextureStage *v51; // eax
  unsigned int **v52; // ebp
  NiD3DTextureStage *v53; // eax
  unsigned int **v54; // ebp
  NiD3DTextureStage *v55; // eax
  unsigned int **v56; // ebp
  NiD3DTextureStage *v57; // eax
  unsigned int **v58; // ebp
  NiD3DTextureStage *v59; // eax
  NiD3DVertexShader *v60; // ebp
  int v61; // ebx
  NiD3DPixelShader *v62; // ebp
  int v63; // ebx
  unsigned int **v64; // ebp
  NiD3DTextureStage *v65; // eax
  unsigned int **v66; // ebp
  NiD3DTextureStage *v67; // eax
  unsigned int **v68; // ebp
  NiD3DTextureStage *v69; // eax
  unsigned int **v70; // ebp
  NiD3DTextureStage *v71; // eax
  unsigned int **v72; // ebp
  NiD3DTextureStage *v73; // eax
  NiD3DTextureStage **v74; // eax
  NiD3DTextureStage *v75; // eax
  NiD3DTextureStage *v76; // edi
  NiD3DTextureStage **v77; // eax
  NiD3DTextureStage *v78; // eax
  unsigned int *v79; // edi
  NiD3DTextureStage **v80; // eax
  NiD3DTextureStage *v81; // eax
  NiD3DTextureStage **v82; // eax
  NiD3DTextureStage *v83; // eax
  unsigned int *v84; // edi
  NiD3DTextureStage **v85; // eax
  NiD3DTextureStage *v86; // eax
  unsigned int *v87; // edi
  NiD3DTextureStage **v88; // eax
  NiD3DTextureStage *v89; // eax
  unsigned int *v90; // edi
  NiD3DTextureStage **v91; // eax
  NiD3DTextureStage *v92; // eax
  unsigned int *v93; // edi
  NiD3DTextureStage **v94; // eax
  NiD3DTextureStage *v95; // eax
  unsigned int *v96; // edi
  NiD3DTextureStage **v97; // eax
  NiD3DTextureStage *v98; // eax
  NiD3DTextureStage *v99; // edi
  NiD3DTextureStage **v100; // eax
  NiD3DTextureStage *v101; // eax
  unsigned int *v102; // edi
  NiD3DTextureStage **v103; // eax
  NiD3DTextureStage *v104; // eax
  NiD3DTextureStage **v105; // eax
  NiD3DTextureStage *v106; // eax
  unsigned int *v107; // edi
  NiD3DTextureStage **v108; // eax
  NiD3DTextureStage *v109; // eax
  unsigned int *v110; // edi
  NiD3DTextureStage **v111; // eax
  NiD3DTextureStage *v112; // eax
  unsigned int *v113; // edi
  NiD3DTextureStage **v114; // eax
  NiD3DTextureStage *v115; // eax
  unsigned int *v116; // edi
  NiD3DTextureStage **v117; // eax
  NiD3DTextureStage *v118; // eax
  unsigned int *v119; // edi
  NiD3DTextureStage **v120; // eax
  NiD3DTextureStage *v121; // eax
  NiD3DTextureStage *v122; // edi
  NiD3DTextureStage **v123; // eax
  NiD3DTextureStage *v124; // eax
  unsigned int *v125; // edi
  NiD3DTextureStage **v126; // eax
  NiD3DTextureStage *v127; // eax
  NiD3DTextureStage **v128; // eax
  NiD3DTextureStage *v129; // eax
  unsigned int *v130; // edi
  NiD3DTextureStage **v131; // eax
  NiD3DTextureStage *v132; // eax
  unsigned int *v133; // edi
  NiD3DTextureStage **v134; // eax
  NiD3DTextureStage *v135; // eax
  unsigned int *v136; // edi
  NiD3DTextureStage **v137; // eax
  NiD3DTextureStage *v138; // eax
  unsigned int *v139; // edi
  NiD3DTextureStage **v140; // eax
  NiD3DTextureStage *v141; // eax
  unsigned int *v142; // edi
  NiD3DTextureStage **v143; // eax
  NiD3DTextureStage *v144; // eax
  NiD3DTextureStage *v145; // edi
  NiD3DTextureStage **v146; // eax
  NiD3DTextureStage *v147; // eax
  unsigned int *v148; // edi
  NiD3DTextureStage **v149; // eax
  NiD3DTextureStage *v150; // eax
  NiD3DTextureStage **v151; // eax
  NiD3DTextureStage *v152; // eax
  unsigned int *v153; // edi
  NiD3DTextureStage **v154; // eax
  NiD3DTextureStage *v155; // eax
  unsigned int *v156; // edi
  NiD3DTextureStage **v157; // eax
  NiD3DTextureStage *v158; // eax
  unsigned int *v159; // edi
  NiD3DTextureStage **v160; // eax
  NiD3DTextureStage *v161; // eax
  unsigned int *v162; // edi
  NiD3DTextureStage **v163; // eax
  NiD3DTextureStage *v164; // eax
  unsigned int *v165; // edi
  NiD3DTextureStage **v166; // eax
  NiD3DTextureStage *v167; // eax
  NiD3DTextureStage *v168; // edi
  NiD3DTextureStage **v169; // eax
  NiD3DTextureStage *v170; // eax
  unsigned int *v171; // edi
  NiD3DTextureStage **v172; // eax
  NiD3DTextureStage *v173; // eax
  NiD3DTextureStage **v174; // eax
  NiD3DTextureStage *v175; // eax
  unsigned int *v176; // edi
  NiD3DTextureStage **v177; // eax
  NiD3DTextureStage *v178; // eax
  unsigned int *v179; // edi
  NiD3DTextureStage **v180; // eax
  NiD3DTextureStage *v181; // eax
  unsigned int *v182; // edi
  NiD3DTextureStage **v183; // eax
  NiD3DTextureStage *v184; // eax
  unsigned int *v185; // edi
  NiD3DTextureStage **v186; // eax
  NiD3DTextureStage *v187; // eax
  unsigned int *v188; // edi
  NiD3DTextureStage **v189; // eax
  NiD3DTextureStage *v190; // eax
  NiD3DTextureStage *v191; // edi
  NiD3DTextureStage **v192; // eax
  NiD3DTextureStage *v193; // eax
  unsigned int *v194; // edi
  NiD3DTextureStage **v195; // eax
  NiD3DTextureStage *v196; // eax
  NiD3DTextureStage **v197; // eax
  NiD3DTextureStage *v198; // eax
  unsigned int *v199; // edi
  NiD3DTextureStage **v200; // eax
  NiD3DTextureStage *v201; // eax
  unsigned int *v202; // edi
  NiD3DTextureStage **v203; // eax
  NiD3DTextureStage *v204; // eax
  unsigned int *v205; // edi
  NiD3DTextureStage **v206; // eax
  NiD3DTextureStage *v207; // eax
  unsigned int *v208; // edi
  NiD3DTextureStage **v209; // eax
  NiD3DTextureStage *v210; // eax
  unsigned int *v211; // edi
  NiD3DTextureStage **v212; // eax
  NiD3DTextureStage *v213; // eax
  NiD3DTextureStage *v214; // edi
  NiD3DTextureStage **v215; // eax
  NiD3DTextureStage *v216; // eax
  unsigned int *v217; // edi
  NiD3DTextureStage **v218; // eax
  NiD3DTextureStage *v219; // eax
  NiD3DTextureStage **v220; // eax
  NiD3DTextureStage *v221; // eax
  unsigned int *v222; // edi
  NiD3DTextureStage **v223; // eax
  NiD3DTextureStage *v224; // eax
  unsigned int *v225; // edi
  NiD3DTextureStage **v226; // eax
  NiD3DTextureStage *v227; // eax
  unsigned int *v228; // edi
  NiD3DTextureStage **v229; // eax
  NiD3DTextureStage *v230; // eax
  unsigned int *v231; // edi
  NiD3DTextureStage **v232; // eax
  NiD3DTextureStage *v233; // eax
  unsigned int *v234; // edi
  NiD3DTextureStage **v235; // eax
  NiD3DTextureStage *v236; // eax
  NiD3DTextureStage *v237; // edi
  NiD3DTextureStage **v238; // eax
  NiD3DTextureStage *v239; // eax
  unsigned int *v240; // edi
  NiD3DTextureStage **v241; // eax
  NiD3DTextureStage *v242; // eax
  NiD3DTextureStage **v243; // eax
  NiD3DTextureStage *v244; // eax
  unsigned int *v245; // edi
  NiD3DTextureStage **v246; // eax
  NiD3DTextureStage *v247; // eax
  unsigned int *v248; // edi
  NiD3DTextureStage **v249; // eax
  NiD3DTextureStage *v250; // eax
  unsigned int *v251; // edi
  NiD3DTextureStage **v252; // eax
  NiD3DTextureStage *v253; // eax
  unsigned int *v254; // edi
  NiD3DTextureStage **v255; // eax
  NiD3DTextureStage *v256; // eax
  unsigned int *v257; // edi
  NiD3DTextureStage **v258; // eax
  NiD3DTextureStage *v259; // eax
  NiD3DTextureStage *v260; // edi
  NiD3DTextureStage **v261; // eax
  NiD3DTextureStage *v262; // eax
  unsigned int *v263; // edi
  NiD3DTextureStage **v264; // eax
  NiD3DTextureStage *v265; // eax
  NiD3DTextureStage **v266; // eax
  NiD3DTextureStage *v267; // eax
  unsigned int *v268; // edi
  NiD3DTextureStage **v269; // eax
  NiD3DTextureStage *v270; // eax
  unsigned int *v271; // edi
  NiD3DTextureStage **v272; // eax
  NiD3DTextureStage *v273; // eax
  unsigned int *v274; // edi
  NiD3DTextureStage **v275; // eax
  NiD3DTextureStage *v276; // eax
  unsigned int *v277; // edi
  NiD3DTextureStage **v278; // eax
  NiD3DTextureStage *v279; // eax
  unsigned int *v280; // edi
  NiD3DTextureStage **v281; // eax
  NiD3DTextureStage *v282; // eax
  NiD3DTextureStage *v283; // edi
  NiD3DTextureStage **v284; // eax
  NiD3DTextureStage *v285; // eax
  unsigned int *v286; // edi
  NiD3DTextureStage **v287; // eax
  NiD3DTextureStage *v288; // eax
  NiD3DPass *v289; // esi
  NiD3DTextureStage **v290; // eax
  NiD3DTextureStage *v291; // eax
  unsigned int *v292; // edi
  NiD3DTextureStage **v293; // eax
  NiD3DTextureStage *v294; // eax
  unsigned int *v295; // edi
  NiD3DTextureStage **v296; // eax
  NiD3DTextureStage *v297; // eax
  unsigned int *v298; // edi
  NiD3DTextureStage **v299; // eax
  NiD3DTextureStage *v300; // eax
  unsigned int *v301; // edi
  NiD3DTextureStage **v302; // eax
  NiD3DTextureStage *v303; // eax
  unsigned int *v304; // edi
  NiD3DTextureStage **v305; // eax
  NiD3DTextureStage *v306; // eax
  NiD3DTextureStage *v307; // edi
  NiD3DTextureStage **v308; // eax
  NiD3DTextureStage *v309; // eax
  unsigned int *v310; // edi
  NiD3DTextureStage **v311; // eax
  NiD3DTextureStage *v312; // eax
  NiD3DPass *v313; // esi
  NiD3DTextureStage **v314; // eax
  NiD3DTextureStage *v315; // eax
  unsigned int *v316; // edi
  NiD3DTextureStage **v317; // eax
  NiD3DTextureStage *v318; // eax
  unsigned int *v319; // edi
  NiD3DTextureStage **v320; // eax
  NiD3DTextureStage *v321; // eax
  unsigned int *v322; // edi
  NiD3DTextureStage **v323; // eax
  NiD3DTextureStage *v324; // eax
  unsigned int *v325; // edi
  NiD3DTextureStage **v326; // eax
  NiD3DTextureStage *v327; // eax
  unsigned int *v328; // edi
  NiD3DTextureStage **v329; // eax
  NiD3DTextureStage *v330; // eax
  NiD3DTextureStage *v331; // edi
  NiD3DTextureStage **v332; // eax
  NiD3DTextureStage *v333; // eax
  unsigned int *v334; // edi
  NiD3DTextureStage **v335; // eax
  NiD3DTextureStage *v336; // eax
  NiD3DPass *v337; // esi
  NiD3DTextureStage **v338; // eax
  NiD3DTextureStage *v339; // eax
  unsigned int *v340; // edi
  NiD3DTextureStage **v341; // eax
  NiD3DTextureStage *v342; // eax
  unsigned int *v343; // edi
  NiD3DTextureStage **v344; // eax
  NiD3DTextureStage *v345; // eax
  unsigned int *v346; // edi
  NiD3DTextureStage **v347; // eax
  NiD3DTextureStage *v348; // eax
  unsigned int *v349; // edi
  NiD3DTextureStage **v350; // eax
  NiD3DTextureStage *v351; // eax
  unsigned int *v352; // edi
  NiD3DTextureStage **v353; // eax
  NiD3DTextureStage *v354; // eax
  NiD3DTextureStage *v355; // edi
  NiD3DTextureStage **v356; // eax
  NiD3DTextureStage *v357; // eax
  unsigned int *v358; // edi
  NiD3DTextureStage **v359; // eax
  NiD3DTextureStage *v360; // eax
  NiD3DPass *v361; // esi
  NiD3DTextureStage **v362; // eax
  NiD3DTextureStage *v363; // eax
  unsigned int *v364; // edi
  NiD3DTextureStage **v365; // eax
  NiD3DTextureStage *v366; // eax
  unsigned int *v367; // edi
  NiD3DTextureStage **v368; // eax
  NiD3DTextureStage *v369; // eax
  unsigned int *v370; // edi
  NiD3DTextureStage **v371; // eax
  NiD3DTextureStage *v372; // eax
  unsigned int *v373; // edi
  NiD3DTextureStage **v374; // eax
  NiD3DTextureStage *v375; // eax
  unsigned int *v376; // edi
  NiD3DTextureStage **v377; // eax
  NiD3DTextureStage *v378; // eax
  NiD3DTextureStage *v379; // edi
  NiD3DTextureStage **v380; // eax
  NiD3DTextureStage *v381; // eax
  unsigned int *v382; // edi
  NiD3DTextureStage **v383; // eax
  NiD3DTextureStage *v384; // eax
  NiD3DPass *v385; // esi
  NiD3DTextureStage **v386; // eax
  NiD3DTextureStage *v387; // eax
  unsigned int *v388; // edi
  NiD3DTextureStage **v389; // eax
  NiD3DTextureStage *v390; // eax
  unsigned int *v391; // edi
  NiD3DTextureStage **v392; // eax
  NiD3DTextureStage *v393; // eax
  unsigned int *v394; // edi
  NiD3DTextureStage **v395; // eax
  NiD3DTextureStage *v396; // eax
  unsigned int *v397; // edi
  NiD3DTextureStage **v398; // eax
  NiD3DTextureStage *v399; // eax
  unsigned int *v400; // edi
  NiD3DTextureStage **v401; // eax
  NiD3DTextureStage *v402; // eax
  NiD3DTextureStage *v403; // edi
  NiD3DTextureStage **v404; // eax
  NiD3DTextureStage *v405; // eax
  unsigned int *v406; // edi
  NiD3DTextureStage **v407; // eax
  NiD3DTextureStage *v408; // eax
  NiD3DPass *v409; // esi
  NiD3DTextureStage **v410; // eax
  NiD3DTextureStage *v411; // eax
  unsigned int *v412; // edi
  NiD3DTextureStage **v413; // eax
  NiD3DTextureStage *v414; // eax
  unsigned int *v415; // edi
  NiD3DTextureStage **v416; // eax
  NiD3DTextureStage *v417; // eax
  unsigned int *v418; // edi
  NiD3DTextureStage **v419; // eax
  NiD3DTextureStage *v420; // eax
  unsigned int *v421; // edi
  NiD3DTextureStage **v422; // eax
  NiD3DTextureStage *v423; // eax
  unsigned int *v424; // edi
  NiD3DTextureStage **v425; // eax
  NiD3DTextureStage *v426; // eax
  NiD3DTextureStage *v427; // edi
  NiD3DTextureStage **v428; // eax
  NiD3DTextureStage *v429; // eax
  unsigned int *v430; // edi
  NiD3DTextureStage **v431; // eax
  NiD3DTextureStage *v432; // eax
  NiD3DPass *v433; // esi
  NiD3DTextureStage **v434; // eax
  NiD3DTextureStage *v435; // eax
  unsigned int *v436; // edi
  NiD3DTextureStage **v437; // eax
  NiD3DTextureStage *v438; // eax
  unsigned int *v439; // edi
  NiD3DTextureStage **v440; // eax
  NiD3DTextureStage *v441; // eax
  unsigned int *v442; // edi
  NiD3DTextureStage **v443; // eax
  NiD3DTextureStage *v444; // eax
  unsigned int *v445; // edi
  NiD3DTextureStage **v446; // eax
  NiD3DTextureStage *v447; // eax
  unsigned int *v448; // edi
  NiD3DTextureStage **v449; // eax
  NiD3DTextureStage *v450; // eax
  NiD3DTextureStage *v451; // edi
  NiD3DTextureStage **v452; // eax
  NiD3DTextureStage *v453; // eax
  unsigned int *v454; // edi
  NiD3DTextureStage **v455; // eax
  NiD3DTextureStage *v456; // eax
  NiD3DPass *v457; // esi
  NiD3DTextureStage **v458; // eax
  NiD3DTextureStage *v459; // eax
  unsigned int *v460; // edi
  NiD3DTextureStage **v461; // eax
  NiD3DTextureStage *v462; // eax
  unsigned int *v463; // edi
  NiD3DTextureStage **v464; // eax
  NiD3DTextureStage *v465; // eax
  unsigned int *v466; // edi
  NiD3DTextureStage **v467; // eax
  NiD3DTextureStage *v468; // eax
  unsigned int *v469; // edi
  NiD3DTextureStage **v470; // eax
  NiD3DTextureStage *v471; // eax
  unsigned int *v472; // edi
  NiD3DTextureStage **v473; // eax
  NiD3DTextureStage *v474; // eax
  NiD3DTextureStage *v475; // edi
  NiD3DTextureStage **v476; // eax
  NiD3DTextureStage *v477; // eax
  unsigned int *v478; // edi
  NiD3DTextureStage **v479; // eax
  NiD3DTextureStage *v480; // eax
  unsigned int *a3; // [esp+18h] [ebp-18h] BYREF
  NiD3DPassVtbl **v482; // [esp+1Ch] [ebp-14h] BYREF
  NiD3DTextureStage *v483; // [esp+20h] [ebp-10h] BYREF
  unsigned int v484; // [esp+2Ch] [ebp-4h]

  v0 = 0; /*0x8282a7*/
  v1 = 0; /*0x8282a9*/
  v482 = 0; /*0x8282ab*/
  v484 = 0; /*0x8282af*/
  a3 = 0; /*0x8282b3*/
  v2 = unk_B45850; /*0x8282b7*/
  v3 = unk_B45850 == 0; /*0x8282bc*/
  LOBYTE(v484) = 1; /*0x8282c3*/
  if ( !v3 ) /*0x8282c8*/
  {
    v0 = (NiD3DPass *)v2; /*0x8282ca*/
    v482 = (NiD3DPassVtbl **)v2; /*0x8282ce*/
    if ( v2 ) /*0x8282d2*/
      ++*(_DWORD *)(v2 + 0x60); /*0x8282d4*/
  }
  if ( v0->StageCount < 8 ) /*0x8282e0*/
  {
    v4 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v483); /*0x8282f3*/
    if ( v4 ) /*0x8282f7*/
    {
      v1 = (NiD3DTextureStage *)v4; /*0x8282f9*/
      ++v4[0x17]; /*0x8282fb*/
      a3 = v4; /*0x8282fe*/
    }
    v5 = v483; /*0x828302*/
    LOBYTE(v484) = 1; /*0x828308*/
    if ( v483 ) /*0x82830d*/
    {
      --v483[7].Unk08; /*0x82830f*/
      if ( !v5[7].Unk08 ) /*0x828317*/
        sub_772560(v5); /*0x82831c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x828328*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x828335*/
    v6 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828347*/
    v3 = v1 == (NiD3DTextureStage *)*v6; /*0x828349*/
    LOBYTE(v484) = 3; /*0x82834c*/
    if ( !v3 ) /*0x828351*/
    {
      if ( v1 ) /*0x828355*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828357*/
        if ( v3 ) /*0x82835a*/
          sub_772560(v1); /*0x82835e*/
      }
      v1 = (NiD3DTextureStage *)*v6; /*0x828363*/
      a3 = *v6; /*0x828368*/
      if ( a3 ) /*0x82836c*/
        ++v1[7].Unk08; /*0x82836e*/
    }
    v7 = v483; /*0x828372*/
    LOBYTE(v484) = 1; /*0x828378*/
    if ( v483 ) /*0x82837d*/
    {
      --v483[7].Unk08; /*0x82837f*/
      if ( !v7[7].Unk08 ) /*0x828387*/
        sub_772560(v7); /*0x82838c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x828398*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x8283a5*/
    v8 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x8283b7*/
    v3 = v1 == (NiD3DTextureStage *)*v8; /*0x8283b9*/
    LOBYTE(v484) = 4; /*0x8283bc*/
    if ( !v3 ) /*0x8283c1*/
    {
      if ( v1 ) /*0x8283c5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8283c7*/
        if ( v3 ) /*0x8283ca*/
          sub_772560(v1); /*0x8283ce*/
      }
      v1 = (NiD3DTextureStage *)*v8; /*0x8283d3*/
      a3 = *v8; /*0x8283d8*/
      if ( a3 ) /*0x8283dc*/
        ++v1[7].Unk08; /*0x8283de*/
    }
    v9 = v483; /*0x8283e2*/
    LOBYTE(v484) = 1; /*0x8283e8*/
    if ( v483 ) /*0x8283ed*/
    {
      --v483[7].Unk08; /*0x8283ef*/
      if ( !v9[7].Unk08 ) /*0x8283f7*/
        sub_772560(v9); /*0x8283fc*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x828408*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x828415*/
    v10 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828427*/
    v3 = v1 == (NiD3DTextureStage *)*v10; /*0x828429*/
    LOBYTE(v484) = 5; /*0x82842c*/
    if ( !v3 ) /*0x828431*/
    {
      if ( v1 ) /*0x828435*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828437*/
        if ( v3 ) /*0x82843a*/
          sub_772560(v1); /*0x82843e*/
      }
      v1 = (NiD3DTextureStage *)*v10; /*0x828443*/
      a3 = *v10; /*0x828448*/
      if ( a3 ) /*0x82844c*/
        ++v1[7].Unk08; /*0x82844e*/
    }
    v11 = v483; /*0x828452*/
    LOBYTE(v484) = 1; /*0x828458*/
    if ( v483 ) /*0x82845d*/
    {
      --v483[7].Unk08; /*0x82845f*/
      if ( !v11[7].Unk08 ) /*0x828467*/
        sub_772560(v11); /*0x82846c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x828478*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x828485*/
    v12 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828497*/
    v3 = v1 == (NiD3DTextureStage *)*v12; /*0x828499*/
    LOBYTE(v484) = 6; /*0x82849c*/
    if ( !v3 ) /*0x8284a1*/
    {
      if ( v1 ) /*0x8284a5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8284a7*/
        if ( v3 ) /*0x8284aa*/
          sub_772560(v1); /*0x8284ae*/
      }
      v1 = (NiD3DTextureStage *)*v12; /*0x8284b3*/
      a3 = *v12; /*0x8284b8*/
      if ( a3 ) /*0x8284bc*/
        ++v1[7].Unk08; /*0x8284be*/
    }
    v13 = v483; /*0x8284c2*/
    LOBYTE(v484) = 1; /*0x8284c8*/
    if ( v483 ) /*0x8284cd*/
    {
      --v483[7].Unk08; /*0x8284cf*/
      if ( !v13[7].Unk08 ) /*0x8284d7*/
        sub_772560(v13); /*0x8284dc*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 1, 2); /*0x8284e8*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x8284f5*/
    v14 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828507*/
    v3 = v1 == (NiD3DTextureStage *)*v14; /*0x828509*/
    LOBYTE(v484) = 7; /*0x82850c*/
    if ( !v3 ) /*0x828511*/
    {
      if ( v1 ) /*0x828515*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828517*/
        if ( v3 ) /*0x82851a*/
          sub_772560(v1); /*0x82851e*/
      }
      v1 = (NiD3DTextureStage *)*v14; /*0x828523*/
      a3 = *v14; /*0x828528*/
      if ( a3 ) /*0x82852c*/
        ++v1[7].Unk08; /*0x82852e*/
    }
    v15 = v483; /*0x828532*/
    LOBYTE(v484) = 1; /*0x828538*/
    if ( v483 ) /*0x82853d*/
    {
      --v483[7].Unk08; /*0x82853f*/
      if ( !v15[7].Unk08 ) /*0x828547*/
        sub_772560(v15); /*0x82854c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 3, 0); /*0x828558*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x828568*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x828572*/
    v16 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828584*/
    v3 = v1 == (NiD3DTextureStage *)*v16; /*0x828586*/
    LOBYTE(v484) = 8; /*0x828589*/
    if ( !v3 ) /*0x82858e*/
    {
      if ( v1 ) /*0x828592*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828594*/
        if ( v3 ) /*0x828597*/
          sub_772560(v1); /*0x82859b*/
      }
      v1 = (NiD3DTextureStage *)*v16; /*0x8285a0*/
      a3 = *v16; /*0x8285a5*/
      if ( a3 ) /*0x8285a9*/
        ++v1[7].Unk08; /*0x8285ab*/
    }
    v17 = v483; /*0x8285af*/
    LOBYTE(v484) = 1; /*0x8285b5*/
    if ( v483 ) /*0x8285ba*/
    {
      --v483[7].Unk08; /*0x8285bc*/
      if ( !v17[7].Unk08 ) /*0x8285c4*/
        sub_772560(v17); /*0x8285c9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 1, 2); /*0x8285d5*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x8285e2*/
    v18 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x8285f4*/
    v3 = v1 == (NiD3DTextureStage *)*v18; /*0x8285f6*/
    LOBYTE(v484) = 9; /*0x8285f9*/
    if ( !v3 ) /*0x8285fe*/
    {
      if ( v1 ) /*0x828602*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828604*/
        if ( v3 ) /*0x828607*/
          sub_772560(v1); /*0x82860b*/
      }
      v1 = (NiD3DTextureStage *)*v18; /*0x828610*/
      a3 = *v18; /*0x828615*/
      if ( a3 ) /*0x828619*/
        ++v1[7].Unk08; /*0x82861b*/
    }
    v19 = v483; /*0x82861f*/
    LOBYTE(v484) = 1; /*0x828625*/
    if ( v483 ) /*0x82862a*/
    {
      --v483[7].Unk08; /*0x82862c*/
      if ( !v19[7].Unk08 ) /*0x828634*/
        sub_772560(v19); /*0x828639*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 7, 3, 0); /*0x828645*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x828652*/
  }
  VertexShader = v0->VertexShader; /*0x82865c*/
  v21 = unk_B45390; /*0x828661*/
  if ( VertexShader != (NiD3DVertexShader *)unk_B45390 ) /*0x828663*/
  {
    if ( VertexShader ) /*0x828667*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x82866d*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x828684*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v21; /*0x828688*/
    if ( v21 ) /*0x82868b*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x828691*/
  }
  PixelShader = v0->PixelShader; /*0x82869c*/
  v23 = unk_B45180; /*0x8286a1*/
  if ( PixelShader != (NiD3DPixelShader *)unk_B45180 ) /*0x8286a3*/
  {
    if ( PixelShader ) /*0x8286a7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x8286ad*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x8286c4*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v23; /*0x8286c8*/
    if ( v23 ) /*0x8286cb*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x8286d1*/
  }
  if ( !v0->RenderStateGroup ) /*0x8286d7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8286e2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x8286ee*/
  if ( !v0->RenderStateGroup ) /*0x8286f3*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8286fe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82870a*/
  if ( !v0->RenderStateGroup ) /*0x82870f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82871a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x828726*/
  if ( !v0->RenderStateGroup ) /*0x82872b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828736*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x828742*/
  if ( !v0->RenderStateGroup ) /*0x828747*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828752*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82875e*/
  if ( !v0->RenderStateGroup ) /*0x828763*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82876e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82877a*/
  v3 = v0 == (NiD3DPass *)unk_B45854; /*0x828782*/
  unk_B43DD0 = 0x38082; /*0x828788*/
  unk_B44460 = 0x10C; /*0x828792*/
  unk_B43740 = 0x18000; /*0x82879c*/
  unk_B44AF0 = 8; /*0x8287a6*/
  if ( !v3 ) /*0x8287b0*/
  {
    v3 = v0->RefCount-- == 1; /*0x8287b2*/
    if ( v3 ) /*0x8287b5*/
      NiD3DPass_ReleaseToPool(v0); /*0x8287b9*/
    v0 = (NiD3DPass *)unk_B45854; /*0x8287be*/
    v482 = (NiD3DPassVtbl **)unk_B45854; /*0x8287c6*/
    if ( v482 ) /*0x8287ca*/
      ++v0->RefCount; /*0x8287cc*/
  }
  if ( v0->StageCount < 8 ) /*0x8287d6*/
  {
    v24 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x8287e9*/
    v3 = v1 == (NiD3DTextureStage *)*v24; /*0x8287eb*/
    LOBYTE(v484) = 0xA; /*0x8287ee*/
    if ( !v3 ) /*0x8287f3*/
    {
      if ( v1 ) /*0x8287f7*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8287f9*/
        if ( v3 ) /*0x8287fc*/
          sub_772560(v1); /*0x828800*/
      }
      v1 = (NiD3DTextureStage *)*v24; /*0x828805*/
      a3 = *v24; /*0x82880a*/
      if ( a3 ) /*0x82880e*/
        ++v1[7].Unk08; /*0x828810*/
    }
    v25 = v483; /*0x828814*/
    LOBYTE(v484) = 1; /*0x82881a*/
    if ( v483 ) /*0x82881f*/
    {
      --v483[7].Unk08; /*0x828821*/
      if ( !v25[7].Unk08 ) /*0x828829*/
        sub_772560(v25); /*0x82882e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82883a*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x828847*/
    v26 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828859*/
    v3 = v1 == (NiD3DTextureStage *)*v26; /*0x82885b*/
    LOBYTE(v484) = 0xB; /*0x82885e*/
    if ( !v3 ) /*0x828863*/
    {
      if ( v1 ) /*0x828867*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828869*/
        if ( v3 ) /*0x82886c*/
          sub_772560(v1); /*0x828870*/
      }
      v1 = (NiD3DTextureStage *)*v26; /*0x828875*/
      a3 = *v26; /*0x82887a*/
      if ( a3 ) /*0x82887e*/
        ++v1[7].Unk08; /*0x828880*/
    }
    v27 = v483; /*0x828884*/
    LOBYTE(v484) = 1; /*0x82888a*/
    if ( v483 ) /*0x82888f*/
    {
      --v483[7].Unk08; /*0x828891*/
      if ( !v27[7].Unk08 ) /*0x828899*/
        sub_772560(v27); /*0x82889e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8288aa*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x8288b7*/
    v28 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x8288c9*/
    v3 = v1 == (NiD3DTextureStage *)*v28; /*0x8288cb*/
    LOBYTE(v484) = 0xC; /*0x8288ce*/
    if ( !v3 ) /*0x8288d3*/
    {
      if ( v1 ) /*0x8288d7*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8288d9*/
        if ( v3 ) /*0x8288dc*/
          sub_772560(v1); /*0x8288e0*/
      }
      v1 = (NiD3DTextureStage *)*v28; /*0x8288e5*/
      a3 = *v28; /*0x8288ea*/
      if ( a3 ) /*0x8288ee*/
        ++v1[7].Unk08; /*0x8288f0*/
    }
    v29 = v483; /*0x8288f4*/
    LOBYTE(v484) = 1; /*0x8288fa*/
    if ( v483 ) /*0x8288ff*/
    {
      --v483[7].Unk08; /*0x828901*/
      if ( !v29[7].Unk08 ) /*0x828909*/
        sub_772560(v29); /*0x82890e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x82891a*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x828927*/
    v30 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828939*/
    v3 = v1 == (NiD3DTextureStage *)*v30; /*0x82893b*/
    LOBYTE(v484) = 0xD; /*0x82893e*/
    if ( !v3 ) /*0x828943*/
    {
      if ( v1 ) /*0x828947*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828949*/
        if ( v3 ) /*0x82894c*/
          sub_772560(v1); /*0x828950*/
      }
      v1 = (NiD3DTextureStage *)*v30; /*0x828955*/
      a3 = *v30; /*0x82895a*/
      if ( a3 ) /*0x82895e*/
        ++v1[7].Unk08; /*0x828960*/
    }
    v31 = v483; /*0x828964*/
    LOBYTE(v484) = 1; /*0x82896a*/
    if ( v483 ) /*0x82896f*/
    {
      --v483[7].Unk08; /*0x828971*/
      if ( !v31[7].Unk08 ) /*0x828979*/
        sub_772560(v31); /*0x82897e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x82898a*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x828997*/
    v32 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x8289a9*/
    v3 = v1 == (NiD3DTextureStage *)*v32; /*0x8289ab*/
    LOBYTE(v484) = 0xE; /*0x8289ae*/
    if ( !v3 ) /*0x8289b3*/
    {
      if ( v1 ) /*0x8289b7*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8289b9*/
        if ( v3 ) /*0x8289bc*/
          sub_772560(v1); /*0x8289c0*/
      }
      v1 = (NiD3DTextureStage *)*v32; /*0x8289c5*/
      a3 = *v32; /*0x8289ca*/
      if ( a3 ) /*0x8289ce*/
        ++v1[7].Unk08; /*0x8289d0*/
    }
    v33 = v483; /*0x8289d4*/
    LOBYTE(v484) = 1; /*0x8289da*/
    if ( v483 ) /*0x8289df*/
    {
      --v483[7].Unk08; /*0x8289e1*/
      if ( !v33[7].Unk08 ) /*0x8289e9*/
        sub_772560(v33); /*0x8289ee*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 1, 2); /*0x8289fa*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x828a07*/
    v34 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828a19*/
    v3 = v1 == (NiD3DTextureStage *)*v34; /*0x828a1b*/
    LOBYTE(v484) = 0xF; /*0x828a1e*/
    if ( !v3 ) /*0x828a23*/
    {
      if ( v1 ) /*0x828a27*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828a29*/
        if ( v3 ) /*0x828a2c*/
          sub_772560(v1); /*0x828a30*/
      }
      v1 = (NiD3DTextureStage *)*v34; /*0x828a35*/
      a3 = *v34; /*0x828a3a*/
      if ( a3 ) /*0x828a3e*/
        ++v1[7].Unk08; /*0x828a40*/
    }
    v35 = v483; /*0x828a44*/
    LOBYTE(v484) = 1; /*0x828a4a*/
    if ( v483 ) /*0x828a4f*/
    {
      --v483[7].Unk08; /*0x828a51*/
      if ( !v35[7].Unk08 ) /*0x828a59*/
        sub_772560(v35); /*0x828a5e*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 3, 0); /*0x828a6a*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x828a7b*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x828a85*/
    v36 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828a97*/
    v3 = v1 == (NiD3DTextureStage *)*v36; /*0x828a99*/
    LOBYTE(v484) = 0x10; /*0x828a9c*/
    if ( !v3 ) /*0x828aa1*/
    {
      if ( v1 ) /*0x828aa5*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828aa7*/
        if ( v3 ) /*0x828aaa*/
          sub_772560(v1); /*0x828aae*/
      }
      v1 = (NiD3DTextureStage *)*v36; /*0x828ab3*/
      a3 = *v36; /*0x828ab8*/
      if ( a3 ) /*0x828abc*/
        ++v1[7].Unk08; /*0x828abe*/
    }
    v37 = v483; /*0x828ac2*/
    LOBYTE(v484) = 1; /*0x828ac8*/
    if ( v483 ) /*0x828acd*/
    {
      --v483[7].Unk08; /*0x828acf*/
      if ( !v37[7].Unk08 ) /*0x828ad7*/
        sub_772560(v37); /*0x828adc*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 1, 2); /*0x828ae8*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x828af5*/
    v38 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828b07*/
    v3 = v1 == (NiD3DTextureStage *)*v38; /*0x828b09*/
    LOBYTE(v484) = 0x11; /*0x828b0c*/
    if ( !v3 ) /*0x828b11*/
    {
      if ( v1 ) /*0x828b15*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828b17*/
        if ( v3 ) /*0x828b1a*/
          sub_772560(v1); /*0x828b1e*/
      }
      v1 = (NiD3DTextureStage *)*v38; /*0x828b23*/
      a3 = *v38; /*0x828b28*/
      if ( a3 ) /*0x828b2c*/
        ++v1[7].Unk08; /*0x828b2e*/
    }
    v39 = v483; /*0x828b32*/
    LOBYTE(v484) = 1; /*0x828b38*/
    if ( v483 ) /*0x828b3d*/
    {
      --v483[7].Unk08; /*0x828b3f*/
      if ( !v39[7].Unk08 ) /*0x828b47*/
        sub_772560(v39); /*0x828b4c*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 7, 3, 0); /*0x828b58*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x828b65*/
  }
  v40 = v0->VertexShader; /*0x828b6f*/
  v41 = unk_B45390; /*0x828b74*/
  if ( v40 != (NiD3DVertexShader *)unk_B45390 ) /*0x828b76*/
  {
    if ( v40 ) /*0x828b7a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) ) /*0x828b80*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v40)(v40, 1); /*0x828b97*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v41; /*0x828b9b*/
    if ( v41 ) /*0x828b9e*/
      InterlockedIncrement((volatile LONG *)(v41 + 4)); /*0x828ba4*/
  }
  v42 = v0->PixelShader; /*0x828baf*/
  v43 = unk_B45184; /*0x828bb4*/
  if ( v42 != (NiD3DPixelShader *)unk_B45184 ) /*0x828bb6*/
  {
    if ( v42 ) /*0x828bba*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) ) /*0x828bc0*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v42)(v42, 1); /*0x828bd7*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v43; /*0x828bdb*/
    if ( v43 ) /*0x828bde*/
      InterlockedIncrement((volatile LONG *)(v43 + 4)); /*0x828be4*/
  }
  if ( !v0->RenderStateGroup ) /*0x828bea*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828bf5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x828c01*/
  if ( !v0->RenderStateGroup ) /*0x828c06*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828c11*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x828c1d*/
  if ( !v0->RenderStateGroup ) /*0x828c22*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828c2d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x828c39*/
  if ( !v0->RenderStateGroup ) /*0x828c3e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828c49*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x828c55*/
  if ( !v0->RenderStateGroup ) /*0x828c5a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828c65*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x828c71*/
  if ( !v0->RenderStateGroup ) /*0x828c76*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x828c81*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x828c8d*/
  v3 = v0 == (NiD3DPass *)unk_B45858; /*0x828c95*/
  unk_B43DD4 = 0x38082; /*0x828c9b*/
  unk_B44464 = 0x18C; /*0x828ca5*/
  unk_B43744 = 0x18000; /*0x828caf*/
  unk_B44AF4 = 0xC; /*0x828cb9*/
  if ( !v3 ) /*0x828cc3*/
  {
    v3 = v0->RefCount-- == 1; /*0x828cc5*/
    if ( v3 ) /*0x828cc8*/
      NiD3DPass_ReleaseToPool(v0); /*0x828ccc*/
    v0 = (NiD3DPass *)unk_B45858; /*0x828cd1*/
    v482 = (NiD3DPassVtbl **)unk_B45858; /*0x828cd9*/
    if ( v482 ) /*0x828cdd*/
      ++v0->RefCount; /*0x828cdf*/
  }
  if ( v0->StageCount < 8 ) /*0x828ce9*/
  {
    v44 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828cfc*/
    v3 = v1 == (NiD3DTextureStage *)*v44; /*0x828cfe*/
    LOBYTE(v484) = 0x12; /*0x828d01*/
    if ( !v3 ) /*0x828d06*/
    {
      if ( v1 ) /*0x828d0a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828d0c*/
        if ( v3 ) /*0x828d0f*/
          sub_772560(v1); /*0x828d13*/
      }
      v1 = (NiD3DTextureStage *)*v44; /*0x828d18*/
      a3 = *v44; /*0x828d1d*/
      if ( a3 ) /*0x828d21*/
        ++v1[7].Unk08; /*0x828d23*/
    }
    v45 = v483; /*0x828d27*/
    LOBYTE(v484) = 1; /*0x828d2d*/
    if ( v483 ) /*0x828d32*/
    {
      --v483[7].Unk08; /*0x828d34*/
      if ( !v45[7].Unk08 ) /*0x828d3c*/
        sub_772560(v45); /*0x828d41*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x828d4d*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x828d5a*/
    v46 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828d6c*/
    v3 = v1 == (NiD3DTextureStage *)*v46; /*0x828d6e*/
    LOBYTE(v484) = 0x13; /*0x828d71*/
    if ( !v3 ) /*0x828d76*/
    {
      if ( v1 ) /*0x828d7a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828d7c*/
        if ( v3 ) /*0x828d7f*/
          sub_772560(v1); /*0x828d83*/
      }
      v1 = (NiD3DTextureStage *)*v46; /*0x828d88*/
      a3 = *v46; /*0x828d8d*/
      if ( a3 ) /*0x828d91*/
        ++v1[7].Unk08; /*0x828d93*/
    }
    v47 = v483; /*0x828d97*/
    LOBYTE(v484) = 1; /*0x828d9d*/
    if ( v483 ) /*0x828da2*/
    {
      --v483[7].Unk08; /*0x828da4*/
      if ( !v47[7].Unk08 ) /*0x828dac*/
        sub_772560(v47); /*0x828db1*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x828dbd*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x828dca*/
    v48 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828ddc*/
    v3 = v1 == (NiD3DTextureStage *)*v48; /*0x828dde*/
    LOBYTE(v484) = 0x14; /*0x828de1*/
    if ( !v3 ) /*0x828de6*/
    {
      if ( v1 ) /*0x828dea*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828dec*/
        if ( v3 ) /*0x828def*/
          sub_772560(v1); /*0x828df3*/
      }
      v1 = (NiD3DTextureStage *)*v48; /*0x828df8*/
      a3 = *v48; /*0x828dfd*/
      if ( a3 ) /*0x828e01*/
        ++v1[7].Unk08; /*0x828e03*/
    }
    v49 = v483; /*0x828e07*/
    LOBYTE(v484) = 1; /*0x828e0d*/
    if ( v483 ) /*0x828e12*/
    {
      --v483[7].Unk08; /*0x828e14*/
      if ( !v49[7].Unk08 ) /*0x828e1c*/
        sub_772560(v49); /*0x828e21*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x828e2d*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x828e3a*/
    v50 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828e4c*/
    v3 = v1 == (NiD3DTextureStage *)*v50; /*0x828e4e*/
    LOBYTE(v484) = 0x15; /*0x828e51*/
    if ( !v3 ) /*0x828e56*/
    {
      if ( v1 ) /*0x828e5a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828e5c*/
        if ( v3 ) /*0x828e5f*/
          sub_772560(v1); /*0x828e63*/
      }
      v1 = (NiD3DTextureStage *)*v50; /*0x828e68*/
      a3 = *v50; /*0x828e6d*/
      if ( a3 ) /*0x828e71*/
        ++v1[7].Unk08; /*0x828e73*/
    }
    v51 = v483; /*0x828e77*/
    LOBYTE(v484) = 1; /*0x828e7d*/
    if ( v483 ) /*0x828e82*/
    {
      --v483[7].Unk08; /*0x828e84*/
      if ( !v51[7].Unk08 ) /*0x828e8c*/
        sub_772560(v51); /*0x828e91*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x828e9d*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x828eaa*/
    v52 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828ebc*/
    v3 = v1 == (NiD3DTextureStage *)*v52; /*0x828ebe*/
    LOBYTE(v484) = 0x16; /*0x828ec1*/
    if ( !v3 ) /*0x828ec6*/
    {
      if ( v1 ) /*0x828eca*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828ecc*/
        if ( v3 ) /*0x828ecf*/
          sub_772560(v1); /*0x828ed3*/
      }
      v1 = (NiD3DTextureStage *)*v52; /*0x828ed8*/
      a3 = *v52; /*0x828edd*/
      if ( a3 ) /*0x828ee1*/
        ++v1[7].Unk08; /*0x828ee3*/
    }
    v53 = v483; /*0x828ee7*/
    LOBYTE(v484) = 1; /*0x828eed*/
    if ( v483 ) /*0x828ef2*/
    {
      --v483[7].Unk08; /*0x828ef4*/
      if ( !v53[7].Unk08 ) /*0x828efc*/
        sub_772560(v53); /*0x828f01*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 1, 2); /*0x828f0d*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x828f1a*/
    v54 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828f2c*/
    v3 = v1 == (NiD3DTextureStage *)*v54; /*0x828f2e*/
    LOBYTE(v484) = 0x17; /*0x828f31*/
    if ( !v3 ) /*0x828f36*/
    {
      if ( v1 ) /*0x828f3a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828f3c*/
        if ( v3 ) /*0x828f3f*/
          sub_772560(v1); /*0x828f43*/
      }
      v1 = (NiD3DTextureStage *)*v54; /*0x828f48*/
      a3 = *v54; /*0x828f4d*/
      if ( a3 ) /*0x828f51*/
        ++v1[7].Unk08; /*0x828f53*/
    }
    v55 = v483; /*0x828f57*/
    LOBYTE(v484) = 1; /*0x828f5d*/
    if ( v483 ) /*0x828f62*/
    {
      --v483[7].Unk08; /*0x828f64*/
      if ( !v55[7].Unk08 ) /*0x828f6c*/
        sub_772560(v55); /*0x828f71*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 5, 3, 0); /*0x828f7d*/
    NiD3DTextureStage_SetTexture(v1, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x828f8e*/
    NiD3DPass_SetTextureStage(v0, 5u, &v1->Stage); /*0x828f98*/
    v56 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x828faa*/
    v3 = v1 == (NiD3DTextureStage *)*v56; /*0x828fac*/
    LOBYTE(v484) = 0x18; /*0x828faf*/
    if ( !v3 ) /*0x828fb4*/
    {
      if ( v1 ) /*0x828fb8*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x828fba*/
        if ( v3 ) /*0x828fbd*/
          sub_772560(v1); /*0x828fc1*/
      }
      v1 = (NiD3DTextureStage *)*v56; /*0x828fc6*/
      a3 = *v56; /*0x828fcb*/
      if ( a3 ) /*0x828fcf*/
        ++v1[7].Unk08; /*0x828fd1*/
    }
    v57 = v483; /*0x828fd5*/
    LOBYTE(v484) = 1; /*0x828fdb*/
    if ( v483 ) /*0x828fe0*/
    {
      --v483[7].Unk08; /*0x828fe2*/
      if ( !v57[7].Unk08 ) /*0x828fea*/
        sub_772560(v57); /*0x828fef*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 6, 1, 2); /*0x828ffb*/
    NiD3DPass_SetTextureStage(v0, 6u, &v1->Stage); /*0x829008*/
    v58 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x82901a*/
    v3 = v1 == (NiD3DTextureStage *)*v58; /*0x82901c*/
    LOBYTE(v484) = 0x19; /*0x82901f*/
    if ( !v3 ) /*0x829024*/
    {
      if ( v1 ) /*0x829028*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82902a*/
        if ( v3 ) /*0x82902d*/
          sub_772560(v1); /*0x829031*/
      }
      v1 = (NiD3DTextureStage *)*v58; /*0x829036*/
      a3 = *v58; /*0x82903b*/
      if ( a3 ) /*0x82903f*/
        ++v1[7].Unk08; /*0x829041*/
    }
    v59 = v483; /*0x829045*/
    LOBYTE(v484) = 1; /*0x82904b*/
    if ( v483 ) /*0x829050*/
    {
      --v483[7].Unk08; /*0x829052*/
      if ( !v59[7].Unk08 ) /*0x82905a*/
        sub_772560(v59); /*0x82905f*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 7, 3, 0); /*0x82906b*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x829078*/
  }
  v60 = v0->VertexShader; /*0x829082*/
  v61 = unk_B45390; /*0x829087*/
  if ( v60 != (NiD3DVertexShader *)unk_B45390 ) /*0x829089*/
  {
    if ( v60 ) /*0x82908d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v60 + 1) ) /*0x829093*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v60)(v60, 1); /*0x8290aa*/
    }
    v0->VertexShader = (NiD3DVertexShader *)v61; /*0x8290ae*/
    if ( v61 ) /*0x8290b1*/
      InterlockedIncrement((volatile LONG *)(v61 + 4)); /*0x8290b7*/
  }
  v62 = v0->PixelShader; /*0x8290c2*/
  v63 = unk_B45188; /*0x8290c7*/
  if ( v62 != (NiD3DPixelShader *)unk_B45188 ) /*0x8290c9*/
  {
    if ( v62 ) /*0x8290cd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v62 + 1) ) /*0x8290d3*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v62)(v62, 1); /*0x8290ea*/
    }
    v0->PixelShader = (NiD3DPixelShader *)v63; /*0x8290ee*/
    if ( v63 ) /*0x8290f1*/
      InterlockedIncrement((volatile LONG *)(v63 + 4)); /*0x8290f7*/
  }
  if ( !v0->RenderStateGroup ) /*0x8290fd*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829108*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x829114*/
  if ( !v0->RenderStateGroup ) /*0x829119*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829124*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x829130*/
  if ( !v0->RenderStateGroup ) /*0x829135*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829140*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82914c*/
  if ( !v0->RenderStateGroup ) /*0x829151*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82915c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x829168*/
  if ( !v0->RenderStateGroup ) /*0x82916d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829178*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x829184*/
  if ( !v0->RenderStateGroup ) /*0x829189*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829194*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8291a0*/
  v3 = v0 == (NiD3DPass *)unk_B45868; /*0x8291a5*/
  unk_B43DD8 = 0x38082; /*0x8291b0*/
  unk_B44468 = 0x18C; /*0x8291ba*/
  unk_B43748 = 0x18000; /*0x8291c4*/
  unk_B44AF8 = 0xC; /*0x8291ca*/
  if ( !v3 ) /*0x8291d4*/
  {
    v3 = v0->RefCount-- == 1; /*0x8291d6*/
    if ( v3 ) /*0x8291da*/
      NiD3DPass_ReleaseToPool(v0); /*0x8291de*/
    v0 = (NiD3DPass *)unk_B45868; /*0x8291e3*/
    v482 = (NiD3DPassVtbl **)unk_B45868; /*0x8291eb*/
    if ( v482 ) /*0x8291ef*/
      ++v0->RefCount; /*0x8291f1*/
  }
  if ( v0->StageCount < 8 ) /*0x8291f9*/
  {
    v64 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x82920c*/
    v3 = v1 == (NiD3DTextureStage *)*v64; /*0x82920e*/
    LOBYTE(v484) = 0x1A; /*0x829211*/
    if ( !v3 ) /*0x829216*/
    {
      if ( v1 ) /*0x82921a*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82921c*/
        if ( v3 ) /*0x829220*/
          sub_772560(v1); /*0x829224*/
      }
      v1 = (NiD3DTextureStage *)*v64; /*0x829229*/
      a3 = *v64; /*0x82922e*/
      if ( a3 ) /*0x829232*/
        ++v1[7].Unk08; /*0x829234*/
    }
    v65 = v483; /*0x829238*/
    LOBYTE(v484) = 1; /*0x82923e*/
    if ( v483 ) /*0x829243*/
    {
      --v483[7].Unk08; /*0x829245*/
      if ( !v65[7].Unk08 ) /*0x82924e*/
        sub_772560(v65); /*0x829253*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 0, 1, 2); /*0x82925f*/
    NiD3DPass_SetTextureStage(v0, 0, &v1->Stage); /*0x82926c*/
    v66 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x82927e*/
    v3 = v1 == (NiD3DTextureStage *)*v66; /*0x829280*/
    LOBYTE(v484) = 0x1B; /*0x829283*/
    if ( !v3 ) /*0x829288*/
    {
      if ( v1 ) /*0x82928c*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x82928e*/
        if ( v3 ) /*0x829292*/
          sub_772560(v1); /*0x829296*/
      }
      v1 = (NiD3DTextureStage *)*v66; /*0x82929b*/
      a3 = *v66; /*0x8292a0*/
      if ( a3 ) /*0x8292a4*/
        ++v1[7].Unk08; /*0x8292a6*/
    }
    v67 = v483; /*0x8292aa*/
    LOBYTE(v484) = 1; /*0x8292b0*/
    if ( v483 ) /*0x8292b5*/
    {
      --v483[7].Unk08; /*0x8292b7*/
      if ( !v67[7].Unk08 ) /*0x8292c0*/
        sub_772560(v67); /*0x8292c5*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 1, 1, 2); /*0x8292d1*/
    NiD3DPass_SetTextureStage(v0, 1u, &v1->Stage); /*0x8292de*/
    v68 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x8292f0*/
    v3 = v1 == (NiD3DTextureStage *)*v68; /*0x8292f2*/
    LOBYTE(v484) = 0x1C; /*0x8292f5*/
    if ( !v3 ) /*0x8292fa*/
    {
      if ( v1 ) /*0x8292fe*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x829300*/
        if ( v3 ) /*0x829304*/
          sub_772560(v1); /*0x829308*/
      }
      v1 = (NiD3DTextureStage *)*v68; /*0x82930d*/
      a3 = *v68; /*0x829312*/
      if ( a3 ) /*0x829316*/
        ++v1[7].Unk08; /*0x829318*/
    }
    v69 = v483; /*0x82931c*/
    LOBYTE(v484) = 1; /*0x829322*/
    if ( v483 ) /*0x829327*/
    {
      --v483[7].Unk08; /*0x829329*/
      if ( !v69[7].Unk08 ) /*0x829332*/
        sub_772560(v69); /*0x829337*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 2, 1, 2); /*0x829343*/
    NiD3DPass_SetTextureStage(v0, 2u, &v1->Stage); /*0x829350*/
    v70 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x829362*/
    v3 = v1 == (NiD3DTextureStage *)*v70; /*0x829364*/
    LOBYTE(v484) = 0x1D; /*0x829367*/
    if ( !v3 ) /*0x82936c*/
    {
      if ( v1 ) /*0x829370*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x829372*/
        if ( v3 ) /*0x829376*/
          sub_772560(v1); /*0x82937a*/
      }
      v1 = (NiD3DTextureStage *)*v70; /*0x82937f*/
      a3 = *v70; /*0x829384*/
      if ( a3 ) /*0x829388*/
        ++v1[7].Unk08; /*0x82938a*/
    }
    v71 = v483; /*0x82938e*/
    LOBYTE(v484) = 1; /*0x829394*/
    if ( v483 ) /*0x829399*/
    {
      --v483[7].Unk08; /*0x82939b*/
      if ( !v71[7].Unk08 ) /*0x8293a4*/
        sub_772560(v71); /*0x8293a9*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 3, 1, 2); /*0x8293b5*/
    NiD3DPass_SetTextureStage(v0, 3u, &v1->Stage); /*0x8293c2*/
    v72 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v483); /*0x8293d4*/
    v3 = v1 == (NiD3DTextureStage *)*v72; /*0x8293d6*/
    LOBYTE(v484) = 0x1E; /*0x8293d9*/
    if ( !v3 ) /*0x8293de*/
    {
      if ( v1 ) /*0x8293e2*/
      {
        v3 = v1[7].Unk08-- == 1; /*0x8293e4*/
        if ( v3 ) /*0x8293e8*/
          sub_772560(v1); /*0x8293ec*/
      }
      v1 = (NiD3DTextureStage *)*v72; /*0x8293f1*/
      a3 = *v72; /*0x8293f6*/
      if ( a3 ) /*0x8293fa*/
        ++v1[7].Unk08; /*0x8293fc*/
    }
    v73 = v483; /*0x829400*/
    LOBYTE(v484) = 1; /*0x829406*/
    if ( v483 ) /*0x82940b*/
    {
      --v483[7].Unk08; /*0x82940d*/
      if ( !v73[7].Unk08 ) /*0x829416*/
        sub_772560(v73); /*0x82941b*/
    }
    BSShader_ConfigureTextureStageSampler(v1, 4, 1, 2); /*0x829427*/
    NiD3DPass_SetTextureStage(v0, 4u, &v1->Stage); /*0x829434*/
    v74 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82943e*/
    LOBYTE(v484) = 0x1F; /*0x82944b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v74); /*0x829450*/
    v75 = v483; /*0x829455*/
    LOBYTE(v484) = 1; /*0x82945b*/
    if ( v483 ) /*0x829460*/
    {
      --v483[7].Unk08; /*0x829462*/
      if ( !v75[7].Unk08 ) /*0x82946b*/
        sub_772560(v75); /*0x829470*/
    }
    v76 = (NiD3DTextureStage *)a3; /*0x829475*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x829480*/
    NiD3DTextureStage_SetTexture(v76, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x829491*/
    NiD3DPass_SetTextureStage(v0, 5u, &v76->Stage); /*0x82949b*/
    v77 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x8294a5*/
    LOBYTE(v484) = 0x20; /*0x8294b2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v77); /*0x8294b7*/
    v78 = v483; /*0x8294bc*/
    LOBYTE(v484) = 1; /*0x8294c2*/
    if ( v483 ) /*0x8294c7*/
    {
      --v483[7].Unk08; /*0x8294c9*/
      if ( !v78[7].Unk08 ) /*0x8294d2*/
        sub_772560(v78); /*0x8294d7*/
    }
    v79 = a3; /*0x8294dc*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x8294e7*/
    NiD3DPass_SetTextureStage(v0, 6u, v79); /*0x8294f4*/
    v80 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x8294fe*/
    LOBYTE(v484) = 0x21; /*0x82950b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v80); /*0x829510*/
    v81 = v483; /*0x829515*/
    LOBYTE(v484) = 1; /*0x82951b*/
    if ( v483 ) /*0x829520*/
    {
      --v483[7].Unk08; /*0x829522*/
      if ( !v81[7].Unk08 ) /*0x82952b*/
        sub_772560(v81); /*0x829530*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x829535*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x829540*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82954d*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45394); /*0x82955b*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45180); /*0x829569*/
  if ( !v0->RenderStateGroup ) /*0x82956e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829579*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x829585*/
  if ( !v0->RenderStateGroup ) /*0x82958a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829595*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x8295a1*/
  if ( !v0->RenderStateGroup ) /*0x8295a6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8295b1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8295bd*/
  if ( !v0->RenderStateGroup ) /*0x8295c2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8295cd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8295d9*/
  if ( !v0->RenderStateGroup ) /*0x8295de*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8295e9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8295f5*/
  if ( !v0->RenderStateGroup ) /*0x8295fa*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829605*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x829611*/
  v3 = v0 == (NiD3DPass *)unk_B4586C; /*0x829616*/
  unk_B43DE8 = 0x78088; /*0x829621*/
  unk_B44478 = 0x10C; /*0x829627*/
  unk_B43758 = 0x18000; /*0x829631*/
  unk_B44B08 = 8; /*0x829637*/
  if ( !v3 ) /*0x829641*/
  {
    v3 = v0->RefCount-- == 1; /*0x829643*/
    if ( v3 ) /*0x829647*/
      NiD3DPass_ReleaseToPool(v0); /*0x82964b*/
    v0 = (NiD3DPass *)unk_B4586C; /*0x829650*/
    v482 = (NiD3DPassVtbl **)unk_B4586C; /*0x829658*/
    if ( v482 ) /*0x82965c*/
      ++v0->RefCount; /*0x82965e*/
  }
  if ( v0->StageCount < 8 ) /*0x829666*/
  {
    v82 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829671*/
    LOBYTE(v484) = 0x22; /*0x82967e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v82); /*0x829683*/
    v83 = v483; /*0x829688*/
    LOBYTE(v484) = 1; /*0x82968e*/
    if ( v483 ) /*0x829693*/
    {
      --v483[7].Unk08; /*0x829695*/
      if ( !v83[7].Unk08 ) /*0x82969e*/
        sub_772560(v83); /*0x8296a3*/
    }
    v84 = a3; /*0x8296a8*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8296b3*/
    NiD3DPass_SetTextureStage(v0, 0, v84); /*0x8296c0*/
    v85 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x8296ca*/
    LOBYTE(v484) = 0x23; /*0x8296d7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v85); /*0x8296dc*/
    v86 = v483; /*0x8296e1*/
    LOBYTE(v484) = 1; /*0x8296e7*/
    if ( v483 ) /*0x8296ec*/
    {
      --v483[7].Unk08; /*0x8296ee*/
      if ( !v86[7].Unk08 ) /*0x8296f7*/
        sub_772560(v86); /*0x8296fc*/
    }
    v87 = a3; /*0x829701*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82970c*/
    NiD3DPass_SetTextureStage(v0, 1u, v87); /*0x829719*/
    v88 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829723*/
    LOBYTE(v484) = 0x24; /*0x829730*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v88); /*0x829735*/
    v89 = v483; /*0x82973a*/
    LOBYTE(v484) = 1; /*0x829740*/
    if ( v483 ) /*0x829745*/
    {
      --v483[7].Unk08; /*0x829747*/
      if ( !v89[7].Unk08 ) /*0x829750*/
        sub_772560(v89); /*0x829755*/
    }
    v90 = a3; /*0x82975a*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x829765*/
    NiD3DPass_SetTextureStage(v0, 2u, v90); /*0x829772*/
    v91 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82977c*/
    LOBYTE(v484) = 0x25; /*0x829789*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v91); /*0x82978e*/
    v92 = v483; /*0x829793*/
    LOBYTE(v484) = 1; /*0x829799*/
    if ( v483 ) /*0x82979e*/
    {
      --v483[7].Unk08; /*0x8297a0*/
      if ( !v92[7].Unk08 ) /*0x8297a9*/
        sub_772560(v92); /*0x8297ae*/
    }
    v93 = a3; /*0x8297b3*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8297be*/
    NiD3DPass_SetTextureStage(v0, 3u, v93); /*0x8297cb*/
    v94 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x8297d5*/
    LOBYTE(v484) = 0x26; /*0x8297e2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v94); /*0x8297e7*/
    v95 = v483; /*0x8297ec*/
    LOBYTE(v484) = 1; /*0x8297f2*/
    if ( v483 ) /*0x8297f7*/
    {
      --v483[7].Unk08; /*0x8297f9*/
      if ( !v95[7].Unk08 ) /*0x829802*/
        sub_772560(v95); /*0x829807*/
    }
    v96 = a3; /*0x82980c*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x829817*/
    NiD3DPass_SetTextureStage(v0, 4u, v96); /*0x829824*/
    v97 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82982e*/
    LOBYTE(v484) = 0x27; /*0x82983b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v97); /*0x829840*/
    v98 = v483; /*0x829845*/
    LOBYTE(v484) = 1; /*0x82984b*/
    if ( v483 ) /*0x829850*/
    {
      --v483[7].Unk08; /*0x829852*/
      if ( !v98[7].Unk08 ) /*0x82985b*/
        sub_772560(v98); /*0x829860*/
    }
    v99 = (NiD3DTextureStage *)a3; /*0x829865*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x829870*/
    NiD3DTextureStage_SetTexture(v99, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x829880*/
    NiD3DPass_SetTextureStage(v0, 5u, &v99->Stage); /*0x82988a*/
    v100 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829894*/
    LOBYTE(v484) = 0x28; /*0x8298a1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v100); /*0x8298a6*/
    v101 = v483; /*0x8298ab*/
    LOBYTE(v484) = 1; /*0x8298b1*/
    if ( v483 ) /*0x8298b6*/
    {
      --v483[7].Unk08; /*0x8298b8*/
      if ( !v101[7].Unk08 ) /*0x8298c1*/
        sub_772560(v101); /*0x8298c6*/
    }
    v102 = a3; /*0x8298cb*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x8298d6*/
    NiD3DPass_SetTextureStage(v0, 6u, v102); /*0x8298e3*/
    v103 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x8298ed*/
    LOBYTE(v484) = 0x29; /*0x8298fa*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v103); /*0x8298ff*/
    v104 = v483; /*0x829904*/
    LOBYTE(v484) = 1; /*0x82990a*/
    if ( v483 ) /*0x82990f*/
    {
      --v483[7].Unk08; /*0x829911*/
      if ( !v104[7].Unk08 ) /*0x82991a*/
        sub_772560(v104); /*0x82991f*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x829924*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82992f*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82993c*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45394); /*0x829949*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45184); /*0x829957*/
  if ( !v0->RenderStateGroup ) /*0x82995c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829967*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x829973*/
  if ( !v0->RenderStateGroup ) /*0x829978*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829983*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82998f*/
  if ( !v0->RenderStateGroup ) /*0x829994*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82999f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x8299ab*/
  if ( !v0->RenderStateGroup ) /*0x8299b0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8299bb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x8299c7*/
  if ( !v0->RenderStateGroup ) /*0x8299cc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8299d7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x8299e3*/
  if ( !v0->RenderStateGroup ) /*0x8299e8*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8299f3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x8299ff*/
  v3 = v0 == (NiD3DPass *)unk_B45870; /*0x829a04*/
  unk_B43DEC = 0x78088; /*0x829a0a*/
  unk_B4447C = 0x18C; /*0x829a10*/
  unk_B4375C = 0x18000; /*0x829a1a*/
  unk_B44B0C = 0xC; /*0x829a20*/
  if ( !v3 ) /*0x829a2a*/
  {
    v3 = v0->RefCount-- == 1; /*0x829a2c*/
    if ( v3 ) /*0x829a30*/
      NiD3DPass_ReleaseToPool(v0); /*0x829a34*/
    v0 = (NiD3DPass *)unk_B45870; /*0x829a39*/
    v482 = (NiD3DPassVtbl **)unk_B45870; /*0x829a41*/
    if ( v482 ) /*0x829a45*/
      ++v0->RefCount; /*0x829a47*/
  }
  if ( v0->StageCount < 8 ) /*0x829a4f*/
  {
    v105 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829a5a*/
    LOBYTE(v484) = 0x2A; /*0x829a67*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v105); /*0x829a6c*/
    v106 = v483; /*0x829a71*/
    LOBYTE(v484) = 1; /*0x829a77*/
    if ( v483 ) /*0x829a7c*/
    {
      --v483[7].Unk08; /*0x829a7e*/
      if ( !v106[7].Unk08 ) /*0x829a87*/
        sub_772560(v106); /*0x829a8c*/
    }
    v107 = a3; /*0x829a91*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x829a9c*/
    NiD3DPass_SetTextureStage(v0, 0, v107); /*0x829aa9*/
    v108 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829ab3*/
    LOBYTE(v484) = 0x2B; /*0x829ac0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v108); /*0x829ac5*/
    v109 = v483; /*0x829aca*/
    LOBYTE(v484) = 1; /*0x829ad0*/
    if ( v483 ) /*0x829ad5*/
    {
      --v483[7].Unk08; /*0x829ad7*/
      if ( !v109[7].Unk08 ) /*0x829ae0*/
        sub_772560(v109); /*0x829ae5*/
    }
    v110 = a3; /*0x829aea*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x829af5*/
    NiD3DPass_SetTextureStage(v0, 1u, v110); /*0x829b02*/
    v111 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829b0c*/
    LOBYTE(v484) = 0x2C; /*0x829b19*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v111); /*0x829b1e*/
    v112 = v483; /*0x829b23*/
    LOBYTE(v484) = 1; /*0x829b29*/
    if ( v483 ) /*0x829b2e*/
    {
      --v483[7].Unk08; /*0x829b30*/
      if ( !v112[7].Unk08 ) /*0x829b39*/
        sub_772560(v112); /*0x829b3e*/
    }
    v113 = a3; /*0x829b43*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x829b4e*/
    NiD3DPass_SetTextureStage(v0, 2u, v113); /*0x829b5b*/
    v114 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829b65*/
    LOBYTE(v484) = 0x2D; /*0x829b72*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v114); /*0x829b77*/
    v115 = v483; /*0x829b7c*/
    LOBYTE(v484) = 1; /*0x829b82*/
    if ( v483 ) /*0x829b87*/
    {
      --v483[7].Unk08; /*0x829b89*/
      if ( !v115[7].Unk08 ) /*0x829b92*/
        sub_772560(v115); /*0x829b97*/
    }
    v116 = a3; /*0x829b9c*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x829ba7*/
    NiD3DPass_SetTextureStage(v0, 3u, v116); /*0x829bb4*/
    v117 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829bbe*/
    LOBYTE(v484) = 0x2E; /*0x829bcb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v117); /*0x829bd0*/
    v118 = v483; /*0x829bd5*/
    LOBYTE(v484) = 1; /*0x829bdb*/
    if ( v483 ) /*0x829be0*/
    {
      --v483[7].Unk08; /*0x829be2*/
      if ( !v118[7].Unk08 ) /*0x829beb*/
        sub_772560(v118); /*0x829bf0*/
    }
    v119 = a3; /*0x829bf5*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x829c00*/
    NiD3DPass_SetTextureStage(v0, 4u, v119); /*0x829c0d*/
    v120 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829c17*/
    LOBYTE(v484) = 0x2F; /*0x829c24*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v120); /*0x829c29*/
    v121 = v483; /*0x829c2e*/
    LOBYTE(v484) = 1; /*0x829c34*/
    if ( v483 ) /*0x829c39*/
    {
      --v483[7].Unk08; /*0x829c3b*/
      if ( !v121[7].Unk08 ) /*0x829c44*/
        sub_772560(v121); /*0x829c49*/
    }
    v122 = (NiD3DTextureStage *)a3; /*0x829c4e*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x829c59*/
    NiD3DTextureStage_SetTexture(v122, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x829c6a*/
    NiD3DPass_SetTextureStage(v0, 5u, &v122->Stage); /*0x829c74*/
    v123 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829c7e*/
    LOBYTE(v484) = 0x30; /*0x829c8b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v123); /*0x829c90*/
    v124 = v483; /*0x829c95*/
    LOBYTE(v484) = 1; /*0x829c9b*/
    if ( v483 ) /*0x829ca0*/
    {
      --v483[7].Unk08; /*0x829ca2*/
      if ( !v124[7].Unk08 ) /*0x829cab*/
        sub_772560(v124); /*0x829cb0*/
    }
    v125 = a3; /*0x829cb5*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x829cc0*/
    NiD3DPass_SetTextureStage(v0, 6u, v125); /*0x829ccd*/
    v126 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829cd7*/
    LOBYTE(v484) = 0x31; /*0x829ce4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v126); /*0x829ce9*/
    v127 = v483; /*0x829cee*/
    LOBYTE(v484) = 1; /*0x829cf4*/
    if ( v483 ) /*0x829cf9*/
    {
      --v483[7].Unk08; /*0x829cfb*/
      if ( !v127[7].Unk08 ) /*0x829d04*/
        sub_772560(v127); /*0x829d09*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x829d0e*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x829d19*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x829d26*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45394); /*0x829d34*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45188); /*0x829d41*/
  if ( !v0->RenderStateGroup ) /*0x829d46*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829d51*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x829d5d*/
  if ( !v0->RenderStateGroup ) /*0x829d62*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829d6d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x829d79*/
  if ( !v0->RenderStateGroup ) /*0x829d7e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829d89*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x829d95*/
  if ( !v0->RenderStateGroup ) /*0x829d9a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829da5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x829db1*/
  if ( !v0->RenderStateGroup ) /*0x829db6*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829dc1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x829dcd*/
  if ( !v0->RenderStateGroup ) /*0x829dd2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x829ddd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x829de9*/
  v3 = v0 == (NiD3DPass *)unk_B45884; /*0x829dee*/
  unk_B43DF0 = 0x78088; /*0x829df4*/
  unk_B44480 = 0x18C; /*0x829dfa*/
  unk_B43760 = 0x18000; /*0x829e04*/
  unk_B44B10 = 0xC; /*0x829e0a*/
  if ( !v3 ) /*0x829e14*/
  {
    v3 = v0->RefCount-- == 1; /*0x829e16*/
    if ( v3 ) /*0x829e1a*/
      NiD3DPass_ReleaseToPool(v0); /*0x829e1e*/
    v0 = (NiD3DPass *)unk_B45884; /*0x829e23*/
    v482 = (NiD3DPassVtbl **)unk_B45884; /*0x829e2b*/
    if ( v482 ) /*0x829e2f*/
      ++v0->RefCount; /*0x829e31*/
  }
  if ( v0->StageCount < 8 ) /*0x829e39*/
  {
    v128 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829e44*/
    LOBYTE(v484) = 0x32; /*0x829e51*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v128); /*0x829e56*/
    v129 = v483; /*0x829e5b*/
    LOBYTE(v484) = 1; /*0x829e61*/
    if ( v483 ) /*0x829e66*/
    {
      --v483[7].Unk08; /*0x829e68*/
      if ( !v129[7].Unk08 ) /*0x829e71*/
        sub_772560(v129); /*0x829e76*/
    }
    v130 = a3; /*0x829e7b*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x829e86*/
    NiD3DPass_SetTextureStage(v0, 0, v130); /*0x829e93*/
    v131 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829e9d*/
    LOBYTE(v484) = 0x33; /*0x829eaa*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v131); /*0x829eaf*/
    v132 = v483; /*0x829eb4*/
    LOBYTE(v484) = 1; /*0x829eba*/
    if ( v483 ) /*0x829ebf*/
    {
      --v483[7].Unk08; /*0x829ec1*/
      if ( !v132[7].Unk08 ) /*0x829eca*/
        sub_772560(v132); /*0x829ecf*/
    }
    v133 = a3; /*0x829ed4*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x829edf*/
    NiD3DPass_SetTextureStage(v0, 1u, v133); /*0x829eec*/
    v134 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829ef6*/
    LOBYTE(v484) = 0x34; /*0x829f03*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v134); /*0x829f08*/
    v135 = v483; /*0x829f0d*/
    LOBYTE(v484) = 1; /*0x829f13*/
    if ( v483 ) /*0x829f18*/
    {
      --v483[7].Unk08; /*0x829f1a*/
      if ( !v135[7].Unk08 ) /*0x829f23*/
        sub_772560(v135); /*0x829f28*/
    }
    v136 = a3; /*0x829f2d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x829f38*/
    NiD3DPass_SetTextureStage(v0, 2u, v136); /*0x829f45*/
    v137 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829f4f*/
    LOBYTE(v484) = 0x35; /*0x829f5c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v137); /*0x829f61*/
    v138 = v483; /*0x829f66*/
    LOBYTE(v484) = 1; /*0x829f6c*/
    if ( v483 ) /*0x829f71*/
    {
      --v483[7].Unk08; /*0x829f73*/
      if ( !v138[7].Unk08 ) /*0x829f7c*/
        sub_772560(v138); /*0x829f81*/
    }
    v139 = a3; /*0x829f86*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x829f91*/
    NiD3DPass_SetTextureStage(v0, 3u, v139); /*0x829f9e*/
    v140 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x829fa8*/
    LOBYTE(v484) = 0x36; /*0x829fb5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v140); /*0x829fba*/
    v141 = v483; /*0x829fbf*/
    LOBYTE(v484) = 1; /*0x829fc5*/
    if ( v483 ) /*0x829fca*/
    {
      --v483[7].Unk08; /*0x829fcc*/
      if ( !v141[7].Unk08 ) /*0x829fd5*/
        sub_772560(v141); /*0x829fda*/
    }
    v142 = a3; /*0x829fdf*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x829fea*/
    NiD3DPass_SetTextureStage(v0, 4u, v142); /*0x829ff7*/
    v143 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a001*/
    LOBYTE(v484) = 0x37; /*0x82a00e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v143); /*0x82a013*/
    v144 = v483; /*0x82a018*/
    LOBYTE(v484) = 1; /*0x82a01e*/
    if ( v483 ) /*0x82a023*/
    {
      --v483[7].Unk08; /*0x82a025*/
      if ( !v144[7].Unk08 ) /*0x82a02e*/
        sub_772560(v144); /*0x82a033*/
    }
    v145 = (NiD3DTextureStage *)a3; /*0x82a038*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82a043*/
    NiD3DTextureStage_SetTexture(v145, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82a054*/
    NiD3DPass_SetTextureStage(v0, 5u, &v145->Stage); /*0x82a05e*/
    v146 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a068*/
    LOBYTE(v484) = 0x38; /*0x82a075*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v146); /*0x82a07a*/
    v147 = v483; /*0x82a07f*/
    LOBYTE(v484) = 1; /*0x82a085*/
    if ( v483 ) /*0x82a08a*/
    {
      --v483[7].Unk08; /*0x82a08c*/
      if ( !v147[7].Unk08 ) /*0x82a095*/
        sub_772560(v147); /*0x82a09a*/
    }
    v148 = a3; /*0x82a09f*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82a0aa*/
    NiD3DPass_SetTextureStage(v0, 6u, v148); /*0x82a0b7*/
    v149 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a0c1*/
    LOBYTE(v484) = 0x39; /*0x82a0ce*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v149); /*0x82a0d3*/
    v150 = v483; /*0x82a0d8*/
    LOBYTE(v484) = 1; /*0x82a0de*/
    if ( v483 ) /*0x82a0e3*/
    {
      --v483[7].Unk08; /*0x82a0e5*/
      if ( !v150[7].Unk08 ) /*0x82a0ee*/
        sub_772560(v150); /*0x82a0f3*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82a0f8*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82a103*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82a110*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45398); /*0x82a11e*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B4518C); /*0x82a12c*/
  if ( !v0->RenderStateGroup ) /*0x82a131*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a13c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82a148*/
  if ( !v0->RenderStateGroup ) /*0x82a14d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a158*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82a164*/
  if ( !v0->RenderStateGroup ) /*0x82a169*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a174*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82a180*/
  if ( !v0->RenderStateGroup ) /*0x82a185*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a190*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82a19c*/
  if ( !v0->RenderStateGroup ) /*0x82a1a1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a1ac*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82a1b8*/
  if ( !v0->RenderStateGroup ) /*0x82a1bd*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a1c8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82a1d4*/
  v3 = v0 == (NiD3DPass *)unk_B45888; /*0x82a1d9*/
  unk_B43E04 = 0x380F2; /*0x82a1e9*/
  unk_B44494 = 0x10C; /*0x82a1ef*/
  unk_B43774 = 0x18060; /*0x82a1f5*/
  unk_B44B24 = 8; /*0x82a1ff*/
  if ( !v3 ) /*0x82a209*/
  {
    v3 = v0->RefCount-- == 1; /*0x82a20b*/
    if ( v3 ) /*0x82a20f*/
      NiD3DPass_ReleaseToPool(v0); /*0x82a213*/
    v0 = (NiD3DPass *)unk_B45888; /*0x82a218*/
    v482 = (NiD3DPassVtbl **)unk_B45888; /*0x82a220*/
    if ( v482 ) /*0x82a224*/
      ++v0->RefCount; /*0x82a226*/
  }
  if ( v0->StageCount < 8 ) /*0x82a230*/
  {
    v151 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a23b*/
    LOBYTE(v484) = 0x3A; /*0x82a248*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v151); /*0x82a24d*/
    v152 = v483; /*0x82a252*/
    LOBYTE(v484) = 1; /*0x82a258*/
    if ( v483 ) /*0x82a25d*/
    {
      --v483[7].Unk08; /*0x82a25f*/
      if ( !v152[7].Unk08 ) /*0x82a268*/
        sub_772560(v152); /*0x82a26d*/
    }
    v153 = a3; /*0x82a272*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82a27d*/
    NiD3DPass_SetTextureStage(v0, 0, v153); /*0x82a28a*/
    v154 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a294*/
    LOBYTE(v484) = 0x3B; /*0x82a2a1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v154); /*0x82a2a6*/
    v155 = v483; /*0x82a2ab*/
    LOBYTE(v484) = 1; /*0x82a2b1*/
    if ( v483 ) /*0x82a2b6*/
    {
      --v483[7].Unk08; /*0x82a2b8*/
      if ( !v155[7].Unk08 ) /*0x82a2c1*/
        sub_772560(v155); /*0x82a2c6*/
    }
    v156 = a3; /*0x82a2cb*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82a2d6*/
    NiD3DPass_SetTextureStage(v0, 1u, v156); /*0x82a2e3*/
    v157 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a2ed*/
    LOBYTE(v484) = 0x3C; /*0x82a2fa*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v157); /*0x82a2ff*/
    v158 = v483; /*0x82a304*/
    LOBYTE(v484) = 1; /*0x82a30a*/
    if ( v483 ) /*0x82a30f*/
    {
      --v483[7].Unk08; /*0x82a311*/
      if ( !v158[7].Unk08 ) /*0x82a31a*/
        sub_772560(v158); /*0x82a31f*/
    }
    v159 = a3; /*0x82a324*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82a32f*/
    NiD3DPass_SetTextureStage(v0, 2u, v159); /*0x82a33c*/
    v160 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a346*/
    LOBYTE(v484) = 0x3D; /*0x82a353*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v160); /*0x82a358*/
    v161 = v483; /*0x82a35d*/
    LOBYTE(v484) = 1; /*0x82a363*/
    if ( v483 ) /*0x82a368*/
    {
      --v483[7].Unk08; /*0x82a36a*/
      if ( !v161[7].Unk08 ) /*0x82a373*/
        sub_772560(v161); /*0x82a378*/
    }
    v162 = a3; /*0x82a37d*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82a388*/
    NiD3DPass_SetTextureStage(v0, 3u, v162); /*0x82a395*/
    v163 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a39f*/
    LOBYTE(v484) = 0x3E; /*0x82a3ac*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v163); /*0x82a3b1*/
    v164 = v483; /*0x82a3b6*/
    LOBYTE(v484) = 1; /*0x82a3bc*/
    if ( v483 ) /*0x82a3c1*/
    {
      --v483[7].Unk08; /*0x82a3c3*/
      if ( !v164[7].Unk08 ) /*0x82a3cc*/
        sub_772560(v164); /*0x82a3d1*/
    }
    v165 = a3; /*0x82a3d6*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82a3e1*/
    NiD3DPass_SetTextureStage(v0, 4u, v165); /*0x82a3ee*/
    v166 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a3f8*/
    LOBYTE(v484) = 0x3F; /*0x82a405*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v166); /*0x82a40a*/
    v167 = v483; /*0x82a40f*/
    LOBYTE(v484) = 1; /*0x82a415*/
    if ( v483 ) /*0x82a41a*/
    {
      --v483[7].Unk08; /*0x82a41c*/
      if ( !v167[7].Unk08 ) /*0x82a425*/
        sub_772560(v167); /*0x82a42a*/
    }
    v168 = (NiD3DTextureStage *)a3; /*0x82a42f*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82a43a*/
    NiD3DTextureStage_SetTexture(v168, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82a44a*/
    NiD3DPass_SetTextureStage(v0, 5u, &v168->Stage); /*0x82a454*/
    v169 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a45e*/
    LOBYTE(v484) = 0x40; /*0x82a46b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v169); /*0x82a470*/
    v170 = v483; /*0x82a475*/
    LOBYTE(v484) = 1; /*0x82a47b*/
    if ( v483 ) /*0x82a480*/
    {
      --v483[7].Unk08; /*0x82a482*/
      if ( !v170[7].Unk08 ) /*0x82a48b*/
        sub_772560(v170); /*0x82a490*/
    }
    v171 = a3; /*0x82a495*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82a4a0*/
    NiD3DPass_SetTextureStage(v0, 6u, v171); /*0x82a4ad*/
    v172 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a4b7*/
    LOBYTE(v484) = 0x41; /*0x82a4c4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v172); /*0x82a4c9*/
    v173 = v483; /*0x82a4ce*/
    LOBYTE(v484) = 1; /*0x82a4d4*/
    if ( v483 ) /*0x82a4d9*/
    {
      --v483[7].Unk08; /*0x82a4db*/
      if ( !v173[7].Unk08 ) /*0x82a4e4*/
        sub_772560(v173); /*0x82a4e9*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82a4ee*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82a4f9*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82a506*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45398); /*0x82a513*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45190); /*0x82a521*/
  if ( !v0->RenderStateGroup ) /*0x82a526*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a531*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82a53d*/
  if ( !v0->RenderStateGroup ) /*0x82a542*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a54d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82a559*/
  if ( !v0->RenderStateGroup ) /*0x82a55e*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a569*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82a575*/
  if ( !v0->RenderStateGroup ) /*0x82a57a*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a585*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82a591*/
  if ( !v0->RenderStateGroup ) /*0x82a596*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a5a1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82a5ad*/
  if ( !v0->RenderStateGroup ) /*0x82a5b2*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a5bd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82a5c9*/
  v3 = v0 == (NiD3DPass *)unk_B4588C; /*0x82a5ce*/
  unk_B43E08 = 0x380F2; /*0x82a5d4*/
  unk_B44498 = 0x18C; /*0x82a5da*/
  unk_B43778 = 0x18060; /*0x82a5e4*/
  unk_B44B28 = 0xC; /*0x82a5ee*/
  if ( !v3 ) /*0x82a5f8*/
  {
    v3 = v0->RefCount-- == 1; /*0x82a5fa*/
    if ( v3 ) /*0x82a5fe*/
      NiD3DPass_ReleaseToPool(v0); /*0x82a602*/
    v0 = (NiD3DPass *)unk_B4588C; /*0x82a607*/
    v482 = (NiD3DPassVtbl **)unk_B4588C; /*0x82a60f*/
    if ( v482 ) /*0x82a613*/
      ++v0->RefCount; /*0x82a615*/
  }
  if ( v0->StageCount < 8 ) /*0x82a61d*/
  {
    v174 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a628*/
    LOBYTE(v484) = 0x42; /*0x82a635*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v174); /*0x82a63a*/
    v175 = v483; /*0x82a63f*/
    LOBYTE(v484) = 1; /*0x82a645*/
    if ( v483 ) /*0x82a64a*/
    {
      --v483[7].Unk08; /*0x82a64c*/
      if ( !v175[7].Unk08 ) /*0x82a655*/
        sub_772560(v175); /*0x82a65a*/
    }
    v176 = a3; /*0x82a65f*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82a66a*/
    NiD3DPass_SetTextureStage(v0, 0, v176); /*0x82a677*/
    v177 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a681*/
    LOBYTE(v484) = 0x43; /*0x82a68e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v177); /*0x82a693*/
    v178 = v483; /*0x82a698*/
    LOBYTE(v484) = 1; /*0x82a69e*/
    if ( v483 ) /*0x82a6a3*/
    {
      --v483[7].Unk08; /*0x82a6a5*/
      if ( !v178[7].Unk08 ) /*0x82a6ae*/
        sub_772560(v178); /*0x82a6b3*/
    }
    v179 = a3; /*0x82a6b8*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82a6c3*/
    NiD3DPass_SetTextureStage(v0, 1u, v179); /*0x82a6d0*/
    v180 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a6da*/
    LOBYTE(v484) = 0x44; /*0x82a6e7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v180); /*0x82a6ec*/
    v181 = v483; /*0x82a6f1*/
    LOBYTE(v484) = 1; /*0x82a6f7*/
    if ( v483 ) /*0x82a6fc*/
    {
      --v483[7].Unk08; /*0x82a6fe*/
      if ( !v181[7].Unk08 ) /*0x82a707*/
        sub_772560(v181); /*0x82a70c*/
    }
    v182 = a3; /*0x82a711*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82a71c*/
    NiD3DPass_SetTextureStage(v0, 2u, v182); /*0x82a729*/
    v183 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a733*/
    LOBYTE(v484) = 0x45; /*0x82a740*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v183); /*0x82a745*/
    v184 = v483; /*0x82a74a*/
    LOBYTE(v484) = 1; /*0x82a750*/
    if ( v483 ) /*0x82a755*/
    {
      --v483[7].Unk08; /*0x82a757*/
      if ( !v184[7].Unk08 ) /*0x82a760*/
        sub_772560(v184); /*0x82a765*/
    }
    v185 = a3; /*0x82a76a*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82a775*/
    NiD3DPass_SetTextureStage(v0, 3u, v185); /*0x82a782*/
    v186 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a78c*/
    LOBYTE(v484) = 0x46; /*0x82a799*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v186); /*0x82a79e*/
    v187 = v483; /*0x82a7a3*/
    LOBYTE(v484) = 1; /*0x82a7a9*/
    if ( v483 ) /*0x82a7ae*/
    {
      --v483[7].Unk08; /*0x82a7b0*/
      if ( !v187[7].Unk08 ) /*0x82a7b9*/
        sub_772560(v187); /*0x82a7be*/
    }
    v188 = a3; /*0x82a7c3*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82a7ce*/
    NiD3DPass_SetTextureStage(v0, 4u, v188); /*0x82a7db*/
    v189 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a7e5*/
    LOBYTE(v484) = 0x47; /*0x82a7f2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v189); /*0x82a7f7*/
    v190 = v483; /*0x82a7fc*/
    LOBYTE(v484) = 1; /*0x82a802*/
    if ( v483 ) /*0x82a807*/
    {
      --v483[7].Unk08; /*0x82a809*/
      if ( !v190[7].Unk08 ) /*0x82a812*/
        sub_772560(v190); /*0x82a817*/
    }
    v191 = (NiD3DTextureStage *)a3; /*0x82a81c*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82a827*/
    NiD3DTextureStage_SetTexture(v191, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82a838*/
    NiD3DPass_SetTextureStage(v0, 5u, &v191->Stage); /*0x82a842*/
    v192 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a84c*/
    LOBYTE(v484) = 0x48; /*0x82a859*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v192); /*0x82a85e*/
    v193 = v483; /*0x82a863*/
    LOBYTE(v484) = 1; /*0x82a869*/
    if ( v483 ) /*0x82a86e*/
    {
      --v483[7].Unk08; /*0x82a870*/
      if ( !v193[7].Unk08 ) /*0x82a879*/
        sub_772560(v193); /*0x82a87e*/
    }
    v194 = a3; /*0x82a883*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82a88e*/
    NiD3DPass_SetTextureStage(v0, 6u, v194); /*0x82a89b*/
    v195 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82a8a5*/
    LOBYTE(v484) = 0x49; /*0x82a8b2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v195); /*0x82a8b7*/
    v196 = v483; /*0x82a8bc*/
    LOBYTE(v484) = 1; /*0x82a8c2*/
    if ( v483 ) /*0x82a8c7*/
    {
      --v483[7].Unk08; /*0x82a8c9*/
      if ( !v196[7].Unk08 ) /*0x82a8d2*/
        sub_772560(v196); /*0x82a8d7*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82a8dc*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82a8e7*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82a8f4*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B45398); /*0x82a902*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45194); /*0x82a90f*/
  if ( !v0->RenderStateGroup ) /*0x82a914*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a91f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82a92b*/
  if ( !v0->RenderStateGroup ) /*0x82a930*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a93b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82a947*/
  if ( !v0->RenderStateGroup ) /*0x82a94c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a957*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82a963*/
  if ( !v0->RenderStateGroup ) /*0x82a968*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a973*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82a97f*/
  if ( !v0->RenderStateGroup ) /*0x82a984*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a98f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82a99b*/
  if ( !v0->RenderStateGroup ) /*0x82a9a0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82a9ab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82a9b7*/
  v3 = v0 == (NiD3DPass *)unk_B4589C; /*0x82a9bc*/
  unk_B43E0C = 0x380F2; /*0x82a9c2*/
  unk_B4449C = 0x18C; /*0x82a9c8*/
  unk_B4377C = 0x18060; /*0x82a9d2*/
  unk_B44B2C = 0xC; /*0x82a9dc*/
  if ( !v3 ) /*0x82a9e6*/
  {
    v3 = v0->RefCount-- == 1; /*0x82a9e8*/
    if ( v3 ) /*0x82a9ec*/
      NiD3DPass_ReleaseToPool(v0); /*0x82a9f0*/
    v0 = (NiD3DPass *)unk_B4589C; /*0x82a9f5*/
    v482 = (NiD3DPassVtbl **)unk_B4589C; /*0x82a9fd*/
    if ( v482 ) /*0x82aa01*/
      ++v0->RefCount; /*0x82aa03*/
  }
  if ( v0->StageCount < 8 ) /*0x82aa0b*/
  {
    v197 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82aa16*/
    LOBYTE(v484) = 0x4A; /*0x82aa23*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v197); /*0x82aa28*/
    v198 = v483; /*0x82aa2d*/
    LOBYTE(v484) = 1; /*0x82aa33*/
    if ( v483 ) /*0x82aa38*/
    {
      --v483[7].Unk08; /*0x82aa3a*/
      if ( !v198[7].Unk08 ) /*0x82aa43*/
        sub_772560(v198); /*0x82aa48*/
    }
    v199 = a3; /*0x82aa4d*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82aa58*/
    NiD3DPass_SetTextureStage(v0, 0, v199); /*0x82aa65*/
    v200 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82aa6f*/
    LOBYTE(v484) = 0x4B; /*0x82aa7c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v200); /*0x82aa81*/
    v201 = v483; /*0x82aa86*/
    LOBYTE(v484) = 1; /*0x82aa8c*/
    if ( v483 ) /*0x82aa91*/
    {
      --v483[7].Unk08; /*0x82aa93*/
      if ( !v201[7].Unk08 ) /*0x82aa9c*/
        sub_772560(v201); /*0x82aaa1*/
    }
    v202 = a3; /*0x82aaa6*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82aab1*/
    NiD3DPass_SetTextureStage(v0, 1u, v202); /*0x82aabe*/
    v203 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82aac8*/
    LOBYTE(v484) = 0x4C; /*0x82aad5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v203); /*0x82aada*/
    v204 = v483; /*0x82aadf*/
    LOBYTE(v484) = 1; /*0x82aae5*/
    if ( v483 ) /*0x82aaea*/
    {
      --v483[7].Unk08; /*0x82aaec*/
      if ( !v204[7].Unk08 ) /*0x82aaf5*/
        sub_772560(v204); /*0x82aafa*/
    }
    v205 = a3; /*0x82aaff*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82ab0a*/
    NiD3DPass_SetTextureStage(v0, 2u, v205); /*0x82ab17*/
    v206 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ab21*/
    LOBYTE(v484) = 0x4D; /*0x82ab2e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v206); /*0x82ab33*/
    v207 = v483; /*0x82ab38*/
    LOBYTE(v484) = 1; /*0x82ab3e*/
    if ( v483 ) /*0x82ab43*/
    {
      --v483[7].Unk08; /*0x82ab45*/
      if ( !v207[7].Unk08 ) /*0x82ab4e*/
        sub_772560(v207); /*0x82ab53*/
    }
    v208 = a3; /*0x82ab58*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82ab63*/
    NiD3DPass_SetTextureStage(v0, 3u, v208); /*0x82ab70*/
    v209 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ab7a*/
    LOBYTE(v484) = 0x4E; /*0x82ab87*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v209); /*0x82ab8c*/
    v210 = v483; /*0x82ab91*/
    LOBYTE(v484) = 1; /*0x82ab97*/
    if ( v483 ) /*0x82ab9c*/
    {
      --v483[7].Unk08; /*0x82ab9e*/
      if ( !v210[7].Unk08 ) /*0x82aba7*/
        sub_772560(v210); /*0x82abac*/
    }
    v211 = a3; /*0x82abb1*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82abbc*/
    NiD3DPass_SetTextureStage(v0, 4u, v211); /*0x82abc9*/
    v212 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82abd3*/
    LOBYTE(v484) = 0x4F; /*0x82abe0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v212); /*0x82abe5*/
    v213 = v483; /*0x82abea*/
    LOBYTE(v484) = 1; /*0x82abf0*/
    if ( v483 ) /*0x82abf5*/
    {
      --v483[7].Unk08; /*0x82abf7*/
      if ( !v213[7].Unk08 ) /*0x82ac00*/
        sub_772560(v213); /*0x82ac05*/
    }
    v214 = (NiD3DTextureStage *)a3; /*0x82ac0a*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82ac15*/
    NiD3DTextureStage_SetTexture(v214, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82ac26*/
    NiD3DPass_SetTextureStage(v0, 5u, &v214->Stage); /*0x82ac30*/
    v215 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ac3a*/
    LOBYTE(v484) = 0x50; /*0x82ac47*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v215); /*0x82ac4c*/
    v216 = v483; /*0x82ac51*/
    LOBYTE(v484) = 1; /*0x82ac57*/
    if ( v483 ) /*0x82ac5c*/
    {
      --v483[7].Unk08; /*0x82ac5e*/
      if ( !v216[7].Unk08 ) /*0x82ac67*/
        sub_772560(v216); /*0x82ac6c*/
    }
    v217 = a3; /*0x82ac71*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82ac7c*/
    NiD3DPass_SetTextureStage(v0, 6u, v217); /*0x82ac89*/
    v218 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ac93*/
    LOBYTE(v484) = 0x51; /*0x82aca0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v218); /*0x82aca5*/
    v219 = v483; /*0x82acaa*/
    LOBYTE(v484) = 1; /*0x82acb0*/
    if ( v483 ) /*0x82acb5*/
    {
      --v483[7].Unk08; /*0x82acb7*/
      if ( !v219[7].Unk08 ) /*0x82acc0*/
        sub_772560(v219); /*0x82acc5*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82acca*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82acd5*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82ace2*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4539C); /*0x82acf0*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B4518C); /*0x82acfe*/
  if ( !v0->RenderStateGroup ) /*0x82ad03*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ad0e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82ad1a*/
  if ( !v0->RenderStateGroup ) /*0x82ad1f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ad2a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82ad36*/
  if ( !v0->RenderStateGroup ) /*0x82ad3b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ad46*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82ad52*/
  if ( !v0->RenderStateGroup ) /*0x82ad57*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ad62*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82ad6e*/
  if ( !v0->RenderStateGroup ) /*0x82ad73*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ad7e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82ad8a*/
  if ( !v0->RenderStateGroup ) /*0x82ad8f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82ad9a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82ada6*/
  v3 = v0 == (NiD3DPass *)unk_B458A0; /*0x82adab*/
  unk_B43E1C = 0x780F8; /*0x82adb6*/
  unk_B444AC = 0x10C; /*0x82adbc*/
  unk_B4378C = 0x18060; /*0x82adc2*/
  unk_B44B3C = 8; /*0x82adcc*/
  if ( !v3 ) /*0x82add6*/
  {
    v3 = v0->RefCount-- == 1; /*0x82add8*/
    if ( v3 ) /*0x82addc*/
      NiD3DPass_ReleaseToPool(v0); /*0x82ade0*/
    v0 = (NiD3DPass *)unk_B458A0; /*0x82ade5*/
    v482 = (NiD3DPassVtbl **)unk_B458A0; /*0x82aded*/
    if ( v482 ) /*0x82adf1*/
      ++v0->RefCount; /*0x82adf3*/
  }
  if ( v0->StageCount < 8 ) /*0x82adfb*/
  {
    v220 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ae06*/
    LOBYTE(v484) = 0x52; /*0x82ae13*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v220); /*0x82ae18*/
    v221 = v483; /*0x82ae1d*/
    LOBYTE(v484) = 1; /*0x82ae23*/
    if ( v483 ) /*0x82ae28*/
    {
      --v483[7].Unk08; /*0x82ae2a*/
      if ( !v221[7].Unk08 ) /*0x82ae33*/
        sub_772560(v221); /*0x82ae38*/
    }
    v222 = a3; /*0x82ae3d*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82ae48*/
    NiD3DPass_SetTextureStage(v0, 0, v222); /*0x82ae55*/
    v223 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ae5f*/
    LOBYTE(v484) = 0x53; /*0x82ae6c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v223); /*0x82ae71*/
    v224 = v483; /*0x82ae76*/
    LOBYTE(v484) = 1; /*0x82ae7c*/
    if ( v483 ) /*0x82ae81*/
    {
      --v483[7].Unk08; /*0x82ae83*/
      if ( !v224[7].Unk08 ) /*0x82ae8c*/
        sub_772560(v224); /*0x82ae91*/
    }
    v225 = a3; /*0x82ae96*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82aea1*/
    NiD3DPass_SetTextureStage(v0, 1u, v225); /*0x82aeae*/
    v226 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82aeb8*/
    LOBYTE(v484) = 0x54; /*0x82aec5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v226); /*0x82aeca*/
    v227 = v483; /*0x82aecf*/
    LOBYTE(v484) = 1; /*0x82aed5*/
    if ( v483 ) /*0x82aeda*/
    {
      --v483[7].Unk08; /*0x82aedc*/
      if ( !v227[7].Unk08 ) /*0x82aee5*/
        sub_772560(v227); /*0x82aeea*/
    }
    v228 = a3; /*0x82aeef*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82aefa*/
    NiD3DPass_SetTextureStage(v0, 2u, v228); /*0x82af07*/
    v229 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82af11*/
    LOBYTE(v484) = 0x55; /*0x82af1e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v229); /*0x82af23*/
    v230 = v483; /*0x82af28*/
    LOBYTE(v484) = 1; /*0x82af2e*/
    if ( v483 ) /*0x82af33*/
    {
      --v483[7].Unk08; /*0x82af35*/
      if ( !v230[7].Unk08 ) /*0x82af3e*/
        sub_772560(v230); /*0x82af43*/
    }
    v231 = a3; /*0x82af48*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82af53*/
    NiD3DPass_SetTextureStage(v0, 3u, v231); /*0x82af60*/
    v232 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82af6a*/
    LOBYTE(v484) = 0x56; /*0x82af77*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v232); /*0x82af7c*/
    v233 = v483; /*0x82af81*/
    LOBYTE(v484) = 1; /*0x82af87*/
    if ( v483 ) /*0x82af8c*/
    {
      --v483[7].Unk08; /*0x82af8e*/
      if ( !v233[7].Unk08 ) /*0x82af97*/
        sub_772560(v233); /*0x82af9c*/
    }
    v234 = a3; /*0x82afa1*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82afac*/
    NiD3DPass_SetTextureStage(v0, 4u, v234); /*0x82afb9*/
    v235 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82afc3*/
    LOBYTE(v484) = 0x57; /*0x82afd0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v235); /*0x82afd5*/
    v236 = v483; /*0x82afda*/
    LOBYTE(v484) = 1; /*0x82afe0*/
    if ( v483 ) /*0x82afe5*/
    {
      --v483[7].Unk08; /*0x82afe7*/
      if ( !v236[7].Unk08 ) /*0x82aff0*/
        sub_772560(v236); /*0x82aff5*/
    }
    v237 = (NiD3DTextureStage *)a3; /*0x82affa*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82b005*/
    NiD3DTextureStage_SetTexture(v237, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82b015*/
    NiD3DPass_SetTextureStage(v0, 5u, &v237->Stage); /*0x82b01f*/
    v238 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b029*/
    LOBYTE(v484) = 0x58; /*0x82b036*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v238); /*0x82b03b*/
    v239 = v483; /*0x82b040*/
    LOBYTE(v484) = 1; /*0x82b046*/
    if ( v483 ) /*0x82b04b*/
    {
      --v483[7].Unk08; /*0x82b04d*/
      if ( !v239[7].Unk08 ) /*0x82b056*/
        sub_772560(v239); /*0x82b05b*/
    }
    v240 = a3; /*0x82b060*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82b06b*/
    NiD3DPass_SetTextureStage(v0, 6u, v240); /*0x82b078*/
    v241 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b082*/
    LOBYTE(v484) = 0x59; /*0x82b08f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v241); /*0x82b094*/
    v242 = v483; /*0x82b099*/
    LOBYTE(v484) = 1; /*0x82b09f*/
    if ( v483 ) /*0x82b0a4*/
    {
      --v483[7].Unk08; /*0x82b0a6*/
      if ( !v242[7].Unk08 ) /*0x82b0af*/
        sub_772560(v242); /*0x82b0b4*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82b0b9*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82b0c4*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82b0d1*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4539C); /*0x82b0de*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45190); /*0x82b0ec*/
  if ( !v0->RenderStateGroup ) /*0x82b0f1*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b0fc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82b108*/
  if ( !v0->RenderStateGroup ) /*0x82b10d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b118*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82b124*/
  if ( !v0->RenderStateGroup ) /*0x82b129*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b134*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82b140*/
  if ( !v0->RenderStateGroup ) /*0x82b145*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b150*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82b15c*/
  if ( !v0->RenderStateGroup ) /*0x82b161*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b16c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82b178*/
  if ( !v0->RenderStateGroup ) /*0x82b17d*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b188*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82b194*/
  v3 = v0 == (NiD3DPass *)unk_B458A4; /*0x82b199*/
  unk_B43E20 = 0x780F8; /*0x82b1a4*/
  unk_B444B0 = 0x18C; /*0x82b1aa*/
  unk_B43790 = 0x18060; /*0x82b1b0*/
  unk_B44B40 = 0xC; /*0x82b1ba*/
  if ( !v3 ) /*0x82b1c4*/
  {
    v3 = v0->RefCount-- == 1; /*0x82b1c6*/
    if ( v3 ) /*0x82b1ca*/
      NiD3DPass_ReleaseToPool(v0); /*0x82b1ce*/
    v0 = (NiD3DPass *)unk_B458A4; /*0x82b1d3*/
    v482 = (NiD3DPassVtbl **)unk_B458A4; /*0x82b1db*/
    if ( v482 ) /*0x82b1df*/
      ++v0->RefCount; /*0x82b1e1*/
  }
  if ( v0->StageCount < 8 ) /*0x82b1e9*/
  {
    v243 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b1f4*/
    LOBYTE(v484) = 0x5A; /*0x82b201*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v243); /*0x82b206*/
    v244 = v483; /*0x82b20b*/
    LOBYTE(v484) = 1; /*0x82b211*/
    if ( v483 ) /*0x82b216*/
    {
      --v483[7].Unk08; /*0x82b218*/
      if ( !v244[7].Unk08 ) /*0x82b221*/
        sub_772560(v244); /*0x82b226*/
    }
    v245 = a3; /*0x82b22b*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82b236*/
    NiD3DPass_SetTextureStage(v0, 0, v245); /*0x82b243*/
    v246 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b24d*/
    LOBYTE(v484) = 0x5B; /*0x82b25a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v246); /*0x82b25f*/
    v247 = v483; /*0x82b264*/
    LOBYTE(v484) = 1; /*0x82b26a*/
    if ( v483 ) /*0x82b26f*/
    {
      --v483[7].Unk08; /*0x82b271*/
      if ( !v247[7].Unk08 ) /*0x82b27a*/
        sub_772560(v247); /*0x82b27f*/
    }
    v248 = a3; /*0x82b284*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82b28f*/
    NiD3DPass_SetTextureStage(v0, 1u, v248); /*0x82b29c*/
    v249 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b2a6*/
    LOBYTE(v484) = 0x5C; /*0x82b2b3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v249); /*0x82b2b8*/
    v250 = v483; /*0x82b2bd*/
    LOBYTE(v484) = 1; /*0x82b2c3*/
    if ( v483 ) /*0x82b2c8*/
    {
      --v483[7].Unk08; /*0x82b2ca*/
      if ( !v250[7].Unk08 ) /*0x82b2d3*/
        sub_772560(v250); /*0x82b2d8*/
    }
    v251 = a3; /*0x82b2dd*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82b2e8*/
    NiD3DPass_SetTextureStage(v0, 2u, v251); /*0x82b2f5*/
    v252 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b2ff*/
    LOBYTE(v484) = 0x5D; /*0x82b30c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v252); /*0x82b311*/
    v253 = v483; /*0x82b316*/
    LOBYTE(v484) = 1; /*0x82b31c*/
    if ( v483 ) /*0x82b321*/
    {
      --v483[7].Unk08; /*0x82b323*/
      if ( !v253[7].Unk08 ) /*0x82b32c*/
        sub_772560(v253); /*0x82b331*/
    }
    v254 = a3; /*0x82b336*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82b341*/
    NiD3DPass_SetTextureStage(v0, 3u, v254); /*0x82b34e*/
    v255 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b358*/
    LOBYTE(v484) = 0x5E; /*0x82b365*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v255); /*0x82b36a*/
    v256 = v483; /*0x82b36f*/
    LOBYTE(v484) = 1; /*0x82b375*/
    if ( v483 ) /*0x82b37a*/
    {
      --v483[7].Unk08; /*0x82b37c*/
      if ( !v256[7].Unk08 ) /*0x82b385*/
        sub_772560(v256); /*0x82b38a*/
    }
    v257 = a3; /*0x82b38f*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82b39a*/
    NiD3DPass_SetTextureStage(v0, 4u, v257); /*0x82b3a7*/
    v258 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b3b1*/
    LOBYTE(v484) = 0x5F; /*0x82b3be*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v258); /*0x82b3c3*/
    v259 = v483; /*0x82b3c8*/
    LOBYTE(v484) = 1; /*0x82b3ce*/
    if ( v483 ) /*0x82b3d3*/
    {
      --v483[7].Unk08; /*0x82b3d5*/
      if ( !v259[7].Unk08 ) /*0x82b3de*/
        sub_772560(v259); /*0x82b3e3*/
    }
    v260 = (NiD3DTextureStage *)a3; /*0x82b3e8*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82b3f3*/
    NiD3DTextureStage_SetTexture(v260, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82b404*/
    NiD3DPass_SetTextureStage(v0, 5u, &v260->Stage); /*0x82b40e*/
    v261 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b418*/
    LOBYTE(v484) = 0x60; /*0x82b425*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v261); /*0x82b42a*/
    v262 = v483; /*0x82b42f*/
    LOBYTE(v484) = 1; /*0x82b435*/
    if ( v483 ) /*0x82b43a*/
    {
      --v483[7].Unk08; /*0x82b43c*/
      if ( !v262[7].Unk08 ) /*0x82b445*/
        sub_772560(v262); /*0x82b44a*/
    }
    v263 = a3; /*0x82b44f*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82b45a*/
    NiD3DPass_SetTextureStage(v0, 6u, v263); /*0x82b467*/
    v264 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b471*/
    LOBYTE(v484) = 0x61; /*0x82b47e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v264); /*0x82b483*/
    v265 = v483; /*0x82b488*/
    LOBYTE(v484) = 1; /*0x82b48e*/
    if ( v483 ) /*0x82b493*/
    {
      --v483[7].Unk08; /*0x82b495*/
      if ( !v265[7].Unk08 ) /*0x82b49e*/
        sub_772560(v265); /*0x82b4a3*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82b4a8*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82b4b3*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82b4c0*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B4539C); /*0x82b4ce*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45194); /*0x82b4db*/
  if ( !v0->RenderStateGroup ) /*0x82b4e0*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b4eb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82b4f7*/
  if ( !v0->RenderStateGroup ) /*0x82b4fc*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b507*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82b513*/
  if ( !v0->RenderStateGroup ) /*0x82b518*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b523*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82b52f*/
  if ( !v0->RenderStateGroup ) /*0x82b534*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b53f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82b54b*/
  if ( !v0->RenderStateGroup ) /*0x82b550*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b55b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82b567*/
  if ( !v0->RenderStateGroup ) /*0x82b56c*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b577*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82b583*/
  v3 = v0 == (NiD3DPass *)unk_B458B8; /*0x82b588*/
  unk_B43E24 = 0x780F8; /*0x82b58e*/
  unk_B444B4 = 0x18C; /*0x82b594*/
  unk_B43794 = 0x18060; /*0x82b59a*/
  unk_B44B44 = 0xC; /*0x82b5a4*/
  if ( !v3 ) /*0x82b5ae*/
  {
    v3 = v0->RefCount-- == 1; /*0x82b5b0*/
    if ( v3 ) /*0x82b5b4*/
      NiD3DPass_ReleaseToPool(v0); /*0x82b5b8*/
    v0 = (NiD3DPass *)unk_B458B8; /*0x82b5bd*/
    v482 = (NiD3DPassVtbl **)unk_B458B8; /*0x82b5c5*/
    if ( v482 ) /*0x82b5c9*/
      ++v0->RefCount; /*0x82b5cb*/
  }
  if ( v0->StageCount < 8 ) /*0x82b5d3*/
  {
    v266 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b5de*/
    LOBYTE(v484) = 0x62; /*0x82b5eb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v266); /*0x82b5f0*/
    v267 = v483; /*0x82b5f5*/
    LOBYTE(v484) = 1; /*0x82b5fb*/
    if ( v483 ) /*0x82b600*/
    {
      --v483[7].Unk08; /*0x82b602*/
      if ( !v267[7].Unk08 ) /*0x82b60b*/
        sub_772560(v267); /*0x82b610*/
    }
    v268 = a3; /*0x82b615*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82b620*/
    NiD3DPass_SetTextureStage(v0, 0, v268); /*0x82b62d*/
    v269 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b637*/
    LOBYTE(v484) = 0x63; /*0x82b644*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v269); /*0x82b649*/
    v270 = v483; /*0x82b64e*/
    LOBYTE(v484) = 1; /*0x82b654*/
    if ( v483 ) /*0x82b659*/
    {
      --v483[7].Unk08; /*0x82b65b*/
      if ( !v270[7].Unk08 ) /*0x82b664*/
        sub_772560(v270); /*0x82b669*/
    }
    v271 = a3; /*0x82b66e*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82b679*/
    NiD3DPass_SetTextureStage(v0, 1u, v271); /*0x82b686*/
    v272 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b690*/
    LOBYTE(v484) = 0x64; /*0x82b69d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v272); /*0x82b6a2*/
    v273 = v483; /*0x82b6a7*/
    LOBYTE(v484) = 1; /*0x82b6ad*/
    if ( v483 ) /*0x82b6b2*/
    {
      --v483[7].Unk08; /*0x82b6b4*/
      if ( !v273[7].Unk08 ) /*0x82b6bd*/
        sub_772560(v273); /*0x82b6c2*/
    }
    v274 = a3; /*0x82b6c7*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82b6d2*/
    NiD3DPass_SetTextureStage(v0, 2u, v274); /*0x82b6df*/
    v275 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b6e9*/
    LOBYTE(v484) = 0x65; /*0x82b6f6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v275); /*0x82b6fb*/
    v276 = v483; /*0x82b700*/
    LOBYTE(v484) = 1; /*0x82b706*/
    if ( v483 ) /*0x82b70b*/
    {
      --v483[7].Unk08; /*0x82b70d*/
      if ( !v276[7].Unk08 ) /*0x82b716*/
        sub_772560(v276); /*0x82b71b*/
    }
    v277 = a3; /*0x82b720*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82b72b*/
    NiD3DPass_SetTextureStage(v0, 3u, v277); /*0x82b738*/
    v278 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b742*/
    LOBYTE(v484) = 0x66; /*0x82b74f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v278); /*0x82b754*/
    v279 = v483; /*0x82b759*/
    LOBYTE(v484) = 1; /*0x82b75f*/
    if ( v483 ) /*0x82b764*/
    {
      --v483[7].Unk08; /*0x82b766*/
      if ( !v279[7].Unk08 ) /*0x82b76f*/
        sub_772560(v279); /*0x82b774*/
    }
    v280 = a3; /*0x82b779*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82b784*/
    NiD3DPass_SetTextureStage(v0, 4u, v280); /*0x82b791*/
    v281 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b79b*/
    LOBYTE(v484) = 0x67; /*0x82b7a8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v281); /*0x82b7ad*/
    v282 = v483; /*0x82b7b2*/
    LOBYTE(v484) = 1; /*0x82b7b8*/
    if ( v483 ) /*0x82b7bd*/
    {
      --v483[7].Unk08; /*0x82b7bf*/
      if ( !v282[7].Unk08 ) /*0x82b7c8*/
        sub_772560(v282); /*0x82b7cd*/
    }
    v283 = (NiD3DTextureStage *)a3; /*0x82b7d2*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82b7dd*/
    NiD3DTextureStage_SetTexture(v283, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82b7ee*/
    NiD3DPass_SetTextureStage(v0, 5u, &v283->Stage); /*0x82b7f8*/
    v284 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b802*/
    LOBYTE(v484) = 0x68; /*0x82b80f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v284); /*0x82b814*/
    v285 = v483; /*0x82b819*/
    LOBYTE(v484) = 1; /*0x82b81f*/
    if ( v483 ) /*0x82b824*/
    {
      --v483[7].Unk08; /*0x82b826*/
      if ( !v285[7].Unk08 ) /*0x82b82f*/
        sub_772560(v285); /*0x82b834*/
    }
    v286 = a3; /*0x82b839*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82b844*/
    NiD3DPass_SetTextureStage(v0, 6u, v286); /*0x82b851*/
    v287 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b85b*/
    LOBYTE(v484) = 0x69; /*0x82b868*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v287); /*0x82b86d*/
    v288 = v483; /*0x82b872*/
    LOBYTE(v484) = 1; /*0x82b878*/
    if ( v483 ) /*0x82b87d*/
    {
      --v483[7].Unk08; /*0x82b87f*/
      if ( !v288[7].Unk08 ) /*0x82b888*/
        sub_772560(v288); /*0x82b88d*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82b892*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82b89d*/
    NiD3DPass_SetTextureStage(v0, 7u, &v1->Stage); /*0x82b8aa*/
  }
  NiD3DPass_SetVertexShader(v0, (NiD3DVertexShader *)unk_B453A0); /*0x82b8b8*/
  NiD3DPass_SetPixelShader(v0, (NiD3DPixelShader *)unk_B45198); /*0x82b8c6*/
  if ( !v0->RenderStateGroup ) /*0x82b8cb*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b8d6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0); /*0x82b8e2*/
  if ( !v0->RenderStateGroup ) /*0x82b8e7*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b8f2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0); /*0x82b8fe*/
  if ( !v0->RenderStateGroup ) /*0x82b903*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b90e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 7, 1, 0); /*0x82b91a*/
  if ( !v0->RenderStateGroup ) /*0x82b91f*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b92a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0); /*0x82b936*/
  if ( !v0->RenderStateGroup ) /*0x82b93b*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b946*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0); /*0x82b952*/
  if ( !v0->RenderStateGroup ) /*0x82b957*/
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82b962*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0); /*0x82b96e*/
  unk_B43E38 = 0x39082; /*0x82b986*/
  unk_B444C8 = 0x11C; /*0x82b98c*/
  unk_B437A8 = 0x18000; /*0x82b992*/
  unk_B44B58 = 8; /*0x82b99c*/
  sub_76C890((NiD3DPass **)&v482, &unk_B458BC); /*0x82b9a6*/
  v289 = (NiD3DPass *)v482; /*0x82b9ab*/
  if ( (unsigned int)v482[6] < 8 ) /*0x82b9b3*/
  {
    v290 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82b9be*/
    LOBYTE(v484) = 0x6A; /*0x82b9cb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v290); /*0x82b9d0*/
    v291 = v483; /*0x82b9d5*/
    LOBYTE(v484) = 1; /*0x82b9db*/
    if ( v483 ) /*0x82b9e0*/
    {
      --v483[7].Unk08; /*0x82b9e2*/
      if ( !v291[7].Unk08 ) /*0x82b9eb*/
        sub_772560(v291); /*0x82b9f0*/
    }
    v292 = a3; /*0x82b9f5*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82ba00*/
    NiD3DPass_SetTextureStage(v289, 0, v292); /*0x82ba0d*/
    v293 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ba17*/
    LOBYTE(v484) = 0x6B; /*0x82ba24*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v293); /*0x82ba29*/
    v294 = v483; /*0x82ba2e*/
    LOBYTE(v484) = 1; /*0x82ba34*/
    if ( v483 ) /*0x82ba39*/
    {
      --v483[7].Unk08; /*0x82ba3b*/
      if ( !v294[7].Unk08 ) /*0x82ba44*/
        sub_772560(v294); /*0x82ba49*/
    }
    v295 = a3; /*0x82ba4e*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82ba59*/
    NiD3DPass_SetTextureStage(v289, 1u, v295); /*0x82ba66*/
    v296 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ba70*/
    LOBYTE(v484) = 0x6C; /*0x82ba7d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v296); /*0x82ba82*/
    v297 = v483; /*0x82ba87*/
    LOBYTE(v484) = 1; /*0x82ba8d*/
    if ( v483 ) /*0x82ba92*/
    {
      --v483[7].Unk08; /*0x82ba94*/
      if ( !v297[7].Unk08 ) /*0x82ba9d*/
        sub_772560(v297); /*0x82baa2*/
    }
    v298 = a3; /*0x82baa7*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82bab2*/
    NiD3DPass_SetTextureStage(v289, 2u, v298); /*0x82babf*/
    v299 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bac9*/
    LOBYTE(v484) = 0x6D; /*0x82bad6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v299); /*0x82badb*/
    v300 = v483; /*0x82bae0*/
    LOBYTE(v484) = 1; /*0x82bae6*/
    if ( v483 ) /*0x82baeb*/
    {
      --v483[7].Unk08; /*0x82baed*/
      if ( !v300[7].Unk08 ) /*0x82baf6*/
        sub_772560(v300); /*0x82bafb*/
    }
    v301 = a3; /*0x82bb00*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82bb0b*/
    NiD3DPass_SetTextureStage(v289, 3u, v301); /*0x82bb18*/
    v302 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bb22*/
    LOBYTE(v484) = 0x6E; /*0x82bb2f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v302); /*0x82bb34*/
    v303 = v483; /*0x82bb39*/
    LOBYTE(v484) = 1; /*0x82bb3f*/
    if ( v483 ) /*0x82bb44*/
    {
      --v483[7].Unk08; /*0x82bb46*/
      if ( !v303[7].Unk08 ) /*0x82bb4f*/
        sub_772560(v303); /*0x82bb54*/
    }
    v304 = a3; /*0x82bb59*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82bb64*/
    NiD3DPass_SetTextureStage(v289, 4u, v304); /*0x82bb71*/
    v305 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bb7b*/
    LOBYTE(v484) = 0x6F; /*0x82bb88*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v305); /*0x82bb8d*/
    v306 = v483; /*0x82bb92*/
    LOBYTE(v484) = 1; /*0x82bb98*/
    if ( v483 ) /*0x82bb9d*/
    {
      --v483[7].Unk08; /*0x82bb9f*/
      if ( !v306[7].Unk08 ) /*0x82bba8*/
        sub_772560(v306); /*0x82bbad*/
    }
    v307 = (NiD3DTextureStage *)a3; /*0x82bbb2*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82bbbd*/
    NiD3DTextureStage_SetTexture(v307, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82bbcd*/
    NiD3DPass_SetTextureStage(v289, 5u, &v307->Stage); /*0x82bbd7*/
    v308 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bbe1*/
    LOBYTE(v484) = 0x70; /*0x82bbee*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v308); /*0x82bbf3*/
    v309 = v483; /*0x82bbf8*/
    LOBYTE(v484) = 1; /*0x82bbfe*/
    if ( v483 ) /*0x82bc03*/
    {
      --v483[7].Unk08; /*0x82bc05*/
      if ( !v309[7].Unk08 ) /*0x82bc0e*/
        sub_772560(v309); /*0x82bc13*/
    }
    v310 = a3; /*0x82bc18*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82bc23*/
    NiD3DPass_SetTextureStage(v289, 6u, v310); /*0x82bc30*/
    v311 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bc3a*/
    LOBYTE(v484) = 0x71; /*0x82bc47*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v311); /*0x82bc4c*/
    v312 = v483; /*0x82bc51*/
    LOBYTE(v484) = 1; /*0x82bc57*/
    if ( v483 ) /*0x82bc5c*/
    {
      --v483[7].Unk08; /*0x82bc5e*/
      if ( !v312[7].Unk08 ) /*0x82bc67*/
        sub_772560(v312); /*0x82bc6c*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82bc71*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82bc7c*/
    NiD3DPass_SetTextureStage(v289, 7u, &v1->Stage); /*0x82bc89*/
  }
  NiD3DPass_SetVertexShader(v289, (NiD3DVertexShader *)unk_B453A0); /*0x82bc96*/
  NiD3DPass_SetPixelShader(v289, (NiD3DPixelShader *)unk_B4519C); /*0x82bca4*/
  if ( !v289->RenderStateGroup ) /*0x82bca9*/
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82bcb4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v289->RenderStateGroup, 0x1B, 0, 0); /*0x82bcc0*/
  if ( !v289->RenderStateGroup ) /*0x82bcc5*/
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82bcd0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v289->RenderStateGroup, 0xF, 0, 0); /*0x82bcdc*/
  if ( !v289->RenderStateGroup ) /*0x82bce1*/
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82bcec*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v289->RenderStateGroup, 7, 1, 0); /*0x82bcf8*/
  if ( !v289->RenderStateGroup ) /*0x82bcfd*/
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82bd08*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v289->RenderStateGroup, 0x17, 4, 0); /*0x82bd14*/
  if ( !v289->RenderStateGroup ) /*0x82bd19*/
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82bd24*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v289->RenderStateGroup, 0xE, 1, 0); /*0x82bd30*/
  if ( !v289->RenderStateGroup ) /*0x82bd35*/
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82bd40*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v289->RenderStateGroup, 0x34, 0, 0); /*0x82bd4c*/
  unk_B43E3C = 0x39082; /*0x82bd5a*/
  unk_B444CC = 0x19C; /*0x82bd60*/
  unk_B437AC = 0x18000; /*0x82bd6a*/
  unk_B44B5C = 0xC; /*0x82bd74*/
  sub_76C890((NiD3DPass **)&v482, &unk_B458C0); /*0x82bd7e*/
  v313 = (NiD3DPass *)v482; /*0x82bd83*/
  if ( (unsigned int)v482[6] < 8 ) /*0x82bd8b*/
  {
    v314 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bd96*/
    LOBYTE(v484) = 0x72; /*0x82bda3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v314); /*0x82bda8*/
    v315 = v483; /*0x82bdad*/
    LOBYTE(v484) = 1; /*0x82bdb3*/
    if ( v483 ) /*0x82bdb8*/
    {
      --v483[7].Unk08; /*0x82bdba*/
      if ( !v315[7].Unk08 ) /*0x82bdc3*/
        sub_772560(v315); /*0x82bdc8*/
    }
    v316 = a3; /*0x82bdcd*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82bdd8*/
    NiD3DPass_SetTextureStage(v313, 0, v316); /*0x82bde5*/
    v317 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bdef*/
    LOBYTE(v484) = 0x73; /*0x82bdfc*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v317); /*0x82be01*/
    v318 = v483; /*0x82be06*/
    LOBYTE(v484) = 1; /*0x82be0c*/
    if ( v483 ) /*0x82be11*/
    {
      --v483[7].Unk08; /*0x82be13*/
      if ( !v318[7].Unk08 ) /*0x82be1c*/
        sub_772560(v318); /*0x82be21*/
    }
    v319 = a3; /*0x82be26*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82be31*/
    NiD3DPass_SetTextureStage(v313, 1u, v319); /*0x82be3e*/
    v320 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82be48*/
    LOBYTE(v484) = 0x74; /*0x82be55*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v320); /*0x82be5a*/
    v321 = v483; /*0x82be5f*/
    LOBYTE(v484) = 1; /*0x82be65*/
    if ( v483 ) /*0x82be6a*/
    {
      --v483[7].Unk08; /*0x82be6c*/
      if ( !v321[7].Unk08 ) /*0x82be75*/
        sub_772560(v321); /*0x82be7a*/
    }
    v322 = a3; /*0x82be7f*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82be8a*/
    NiD3DPass_SetTextureStage(v313, 2u, v322); /*0x82be97*/
    v323 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bea1*/
    LOBYTE(v484) = 0x75; /*0x82beae*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v323); /*0x82beb3*/
    v324 = v483; /*0x82beb8*/
    LOBYTE(v484) = 1; /*0x82bebe*/
    if ( v483 ) /*0x82bec3*/
    {
      --v483[7].Unk08; /*0x82bec5*/
      if ( !v324[7].Unk08 ) /*0x82bece*/
        sub_772560(v324); /*0x82bed3*/
    }
    v325 = a3; /*0x82bed8*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82bee3*/
    NiD3DPass_SetTextureStage(v313, 3u, v325); /*0x82bef0*/
    v326 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82befa*/
    LOBYTE(v484) = 0x76; /*0x82bf07*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v326); /*0x82bf0c*/
    v327 = v483; /*0x82bf11*/
    LOBYTE(v484) = 1; /*0x82bf17*/
    if ( v483 ) /*0x82bf1c*/
    {
      --v483[7].Unk08; /*0x82bf1e*/
      if ( !v327[7].Unk08 ) /*0x82bf27*/
        sub_772560(v327); /*0x82bf2c*/
    }
    v328 = a3; /*0x82bf31*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82bf3c*/
    NiD3DPass_SetTextureStage(v313, 4u, v328); /*0x82bf49*/
    v329 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bf53*/
    LOBYTE(v484) = 0x77; /*0x82bf60*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v329); /*0x82bf65*/
    v330 = v483; /*0x82bf6a*/
    LOBYTE(v484) = 1; /*0x82bf70*/
    if ( v483 ) /*0x82bf75*/
    {
      --v483[7].Unk08; /*0x82bf77*/
      if ( !v330[7].Unk08 ) /*0x82bf80*/
        sub_772560(v330); /*0x82bf85*/
    }
    v331 = (NiD3DTextureStage *)a3; /*0x82bf8a*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82bf95*/
    NiD3DTextureStage_SetTexture(v331, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82bfa6*/
    NiD3DPass_SetTextureStage(v313, 5u, &v331->Stage); /*0x82bfb0*/
    v332 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82bfba*/
    LOBYTE(v484) = 0x78; /*0x82bfc7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v332); /*0x82bfcc*/
    v333 = v483; /*0x82bfd1*/
    LOBYTE(v484) = 1; /*0x82bfd7*/
    if ( v483 ) /*0x82bfdc*/
    {
      --v483[7].Unk08; /*0x82bfde*/
      if ( !v333[7].Unk08 ) /*0x82bfe7*/
        sub_772560(v333); /*0x82bfec*/
    }
    v334 = a3; /*0x82bff1*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82bffc*/
    NiD3DPass_SetTextureStage(v313, 6u, v334); /*0x82c009*/
    v335 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c013*/
    LOBYTE(v484) = 0x79; /*0x82c020*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v335); /*0x82c025*/
    v336 = v483; /*0x82c02a*/
    LOBYTE(v484) = 1; /*0x82c030*/
    if ( v483 ) /*0x82c035*/
    {
      --v483[7].Unk08; /*0x82c037*/
      if ( !v336[7].Unk08 ) /*0x82c040*/
        sub_772560(v336); /*0x82c045*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82c04a*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82c055*/
    NiD3DPass_SetTextureStage(v313, 7u, &v1->Stage); /*0x82c062*/
  }
  NiD3DPass_SetVertexShader(v313, (NiD3DVertexShader *)unk_B453A0); /*0x82c070*/
  NiD3DPass_SetPixelShader(v313, (NiD3DPixelShader *)unk_B451A0); /*0x82c07d*/
  if ( !v313->RenderStateGroup ) /*0x82c082*/
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c08d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v313->RenderStateGroup, 0x1B, 0, 0); /*0x82c099*/
  if ( !v313->RenderStateGroup ) /*0x82c09e*/
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c0a9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v313->RenderStateGroup, 0xF, 0, 0); /*0x82c0b5*/
  if ( !v313->RenderStateGroup ) /*0x82c0ba*/
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c0c5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v313->RenderStateGroup, 7, 1, 0); /*0x82c0d1*/
  if ( !v313->RenderStateGroup ) /*0x82c0d6*/
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c0e1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v313->RenderStateGroup, 0x17, 4, 0); /*0x82c0ed*/
  if ( !v313->RenderStateGroup ) /*0x82c0f2*/
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c0fd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v313->RenderStateGroup, 0xE, 1, 0); /*0x82c109*/
  if ( !v313->RenderStateGroup ) /*0x82c10e*/
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c119*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v313->RenderStateGroup, 0x34, 0, 0); /*0x82c125*/
  unk_B43E40 = 0x39082; /*0x82c133*/
  unk_B444D0 = 0x19C; /*0x82c139*/
  unk_B437B0 = 0x18000; /*0x82c143*/
  unk_B44B60 = 0xC; /*0x82c14d*/
  sub_76C890((NiD3DPass **)&v482, &unk_B458D0); /*0x82c157*/
  v337 = (NiD3DPass *)v482; /*0x82c15c*/
  if ( (unsigned int)v482[6] < 8 ) /*0x82c164*/
  {
    v338 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c16f*/
    LOBYTE(v484) = 0x7A; /*0x82c17c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v338); /*0x82c181*/
    v339 = v483; /*0x82c186*/
    LOBYTE(v484) = 1; /*0x82c18c*/
    if ( v483 ) /*0x82c191*/
    {
      --v483[7].Unk08; /*0x82c193*/
      if ( !v339[7].Unk08 ) /*0x82c19c*/
        sub_772560(v339); /*0x82c1a1*/
    }
    v340 = a3; /*0x82c1a6*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82c1b1*/
    NiD3DPass_SetTextureStage(v337, 0, v340); /*0x82c1be*/
    v341 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c1c8*/
    LOBYTE(v484) = 0x7B; /*0x82c1d5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v341); /*0x82c1da*/
    v342 = v483; /*0x82c1df*/
    LOBYTE(v484) = 1; /*0x82c1e5*/
    if ( v483 ) /*0x82c1ea*/
    {
      --v483[7].Unk08; /*0x82c1ec*/
      if ( !v342[7].Unk08 ) /*0x82c1f5*/
        sub_772560(v342); /*0x82c1fa*/
    }
    v343 = a3; /*0x82c1ff*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82c20a*/
    NiD3DPass_SetTextureStage(v337, 1u, v343); /*0x82c217*/
    v344 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c221*/
    LOBYTE(v484) = 0x7C; /*0x82c22e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v344); /*0x82c233*/
    v345 = v483; /*0x82c238*/
    LOBYTE(v484) = 1; /*0x82c23e*/
    if ( v483 ) /*0x82c243*/
    {
      --v483[7].Unk08; /*0x82c245*/
      if ( !v345[7].Unk08 ) /*0x82c24e*/
        sub_772560(v345); /*0x82c253*/
    }
    v346 = a3; /*0x82c258*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82c263*/
    NiD3DPass_SetTextureStage(v337, 2u, v346); /*0x82c270*/
    v347 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c27a*/
    LOBYTE(v484) = 0x7D; /*0x82c287*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v347); /*0x82c28c*/
    v348 = v483; /*0x82c291*/
    LOBYTE(v484) = 1; /*0x82c297*/
    if ( v483 ) /*0x82c29c*/
    {
      --v483[7].Unk08; /*0x82c29e*/
      if ( !v348[7].Unk08 ) /*0x82c2a7*/
        sub_772560(v348); /*0x82c2ac*/
    }
    v349 = a3; /*0x82c2b1*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82c2bc*/
    NiD3DPass_SetTextureStage(v337, 3u, v349); /*0x82c2c9*/
    v350 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c2d3*/
    LOBYTE(v484) = 0x7E; /*0x82c2e0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v350); /*0x82c2e5*/
    v351 = v483; /*0x82c2ea*/
    LOBYTE(v484) = 1; /*0x82c2f0*/
    if ( v483 ) /*0x82c2f5*/
    {
      --v483[7].Unk08; /*0x82c2f7*/
      if ( !v351[7].Unk08 ) /*0x82c300*/
        sub_772560(v351); /*0x82c305*/
    }
    v352 = a3; /*0x82c30a*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82c315*/
    NiD3DPass_SetTextureStage(v337, 4u, v352); /*0x82c322*/
    v353 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c32c*/
    LOBYTE(v484) = 0x7F; /*0x82c339*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v353); /*0x82c33e*/
    v354 = v483; /*0x82c343*/
    LOBYTE(v484) = 1; /*0x82c349*/
    if ( v483 ) /*0x82c34e*/
    {
      --v483[7].Unk08; /*0x82c350*/
      if ( !v354[7].Unk08 ) /*0x82c359*/
        sub_772560(v354); /*0x82c35e*/
    }
    v355 = (NiD3DTextureStage *)a3; /*0x82c363*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82c36e*/
    NiD3DTextureStage_SetTexture(v355, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82c37f*/
    NiD3DPass_SetTextureStage(v337, 5u, &v355->Stage); /*0x82c389*/
    v356 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c393*/
    LOBYTE(v484) = 0x80; /*0x82c3a0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v356); /*0x82c3a5*/
    v357 = v483; /*0x82c3aa*/
    LOBYTE(v484) = 1; /*0x82c3b0*/
    if ( v483 ) /*0x82c3b5*/
    {
      --v483[7].Unk08; /*0x82c3b7*/
      if ( !v357[7].Unk08 ) /*0x82c3c0*/
        sub_772560(v357); /*0x82c3c5*/
    }
    v358 = a3; /*0x82c3ca*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82c3d5*/
    NiD3DPass_SetTextureStage(v337, 6u, v358); /*0x82c3e2*/
    v359 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c3ec*/
    LOBYTE(v484) = 0x81; /*0x82c3f9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v359); /*0x82c3fe*/
    v360 = v483; /*0x82c403*/
    LOBYTE(v484) = 1; /*0x82c409*/
    if ( v483 ) /*0x82c40e*/
    {
      --v483[7].Unk08; /*0x82c410*/
      if ( !v360[7].Unk08 ) /*0x82c419*/
        sub_772560(v360); /*0x82c41e*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82c423*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82c42e*/
    NiD3DPass_SetTextureStage(v337, 7u, &v1->Stage); /*0x82c43b*/
  }
  NiD3DPass_SetVertexShader(v337, (NiD3DVertexShader *)unk_B453A4); /*0x82c449*/
  NiD3DPass_SetPixelShader(v337, (NiD3DPixelShader *)unk_B45198); /*0x82c457*/
  if ( !v337->RenderStateGroup ) /*0x82c45c*/
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c467*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v337->RenderStateGroup, 0x1B, 0, 0); /*0x82c473*/
  if ( !v337->RenderStateGroup ) /*0x82c478*/
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c483*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v337->RenderStateGroup, 0xF, 0, 0); /*0x82c48f*/
  if ( !v337->RenderStateGroup ) /*0x82c494*/
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c49f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v337->RenderStateGroup, 7, 1, 0); /*0x82c4ab*/
  if ( !v337->RenderStateGroup ) /*0x82c4b0*/
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c4bb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v337->RenderStateGroup, 0x17, 4, 0); /*0x82c4c7*/
  if ( !v337->RenderStateGroup ) /*0x82c4cc*/
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c4d7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v337->RenderStateGroup, 0xE, 1, 0); /*0x82c4e3*/
  if ( !v337->RenderStateGroup ) /*0x82c4e8*/
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c4f3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v337->RenderStateGroup, 0x34, 0, 0); /*0x82c4ff*/
  unk_B444E0 = 0x11C; /*0x82c504*/
  unk_B43E50 = 0x79088; /*0x82c51d*/
  unk_B437C0 = 0x18000; /*0x82c523*/
  unk_B44B70 = 8; /*0x82c52d*/
  sub_76C890((NiD3DPass **)&v482, &unk_B458D4); /*0x82c533*/
  v361 = (NiD3DPass *)v482; /*0x82c538*/
  if ( (unsigned int)v482[6] < 8 ) /*0x82c53f*/
  {
    v362 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c54a*/
    LOBYTE(v484) = 0x82; /*0x82c557*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v362); /*0x82c55c*/
    v363 = v483; /*0x82c561*/
    LOBYTE(v484) = 1; /*0x82c567*/
    if ( v483 ) /*0x82c56c*/
    {
      --v483[7].Unk08; /*0x82c56e*/
      if ( !v363[7].Unk08 ) /*0x82c577*/
        sub_772560(v363); /*0x82c57c*/
    }
    v364 = a3; /*0x82c581*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82c58c*/
    NiD3DPass_SetTextureStage(v361, 0, v364); /*0x82c599*/
    v365 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c5a3*/
    LOBYTE(v484) = 0x83; /*0x82c5b0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v365); /*0x82c5b5*/
    v366 = v483; /*0x82c5ba*/
    LOBYTE(v484) = 1; /*0x82c5c0*/
    if ( v483 ) /*0x82c5c5*/
    {
      --v483[7].Unk08; /*0x82c5c7*/
      if ( !v366[7].Unk08 ) /*0x82c5d0*/
        sub_772560(v366); /*0x82c5d5*/
    }
    v367 = a3; /*0x82c5da*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82c5e5*/
    NiD3DPass_SetTextureStage(v361, 1u, v367); /*0x82c5f2*/
    v368 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c5fc*/
    LOBYTE(v484) = 0x84; /*0x82c609*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v368); /*0x82c60e*/
    v369 = v483; /*0x82c613*/
    LOBYTE(v484) = 1; /*0x82c619*/
    if ( v483 ) /*0x82c61e*/
    {
      --v483[7].Unk08; /*0x82c620*/
      if ( !v369[7].Unk08 ) /*0x82c629*/
        sub_772560(v369); /*0x82c62e*/
    }
    v370 = a3; /*0x82c633*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82c63e*/
    NiD3DPass_SetTextureStage(v361, 2u, v370); /*0x82c64b*/
    v371 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c655*/
    LOBYTE(v484) = 0x85; /*0x82c662*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v371); /*0x82c667*/
    v372 = v483; /*0x82c66c*/
    LOBYTE(v484) = 1; /*0x82c672*/
    if ( v483 ) /*0x82c677*/
    {
      --v483[7].Unk08; /*0x82c679*/
      if ( !v372[7].Unk08 ) /*0x82c682*/
        sub_772560(v372); /*0x82c687*/
    }
    v373 = a3; /*0x82c68c*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82c697*/
    NiD3DPass_SetTextureStage(v361, 3u, v373); /*0x82c6a4*/
    v374 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c6ae*/
    LOBYTE(v484) = 0x86; /*0x82c6bb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v374); /*0x82c6c0*/
    v375 = v483; /*0x82c6c5*/
    LOBYTE(v484) = 1; /*0x82c6cb*/
    if ( v483 ) /*0x82c6d0*/
    {
      --v483[7].Unk08; /*0x82c6d2*/
      if ( !v375[7].Unk08 ) /*0x82c6db*/
        sub_772560(v375); /*0x82c6e0*/
    }
    v376 = a3; /*0x82c6e5*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82c6f0*/
    NiD3DPass_SetTextureStage(v361, 4u, v376); /*0x82c6fd*/
    v377 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c707*/
    LOBYTE(v484) = 0x87; /*0x82c714*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v377); /*0x82c719*/
    v378 = v483; /*0x82c71e*/
    LOBYTE(v484) = 1; /*0x82c724*/
    if ( v483 ) /*0x82c729*/
    {
      --v483[7].Unk08; /*0x82c72b*/
      if ( !v378[7].Unk08 ) /*0x82c734*/
        sub_772560(v378); /*0x82c739*/
    }
    v379 = (NiD3DTextureStage *)a3; /*0x82c73e*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82c749*/
    NiD3DTextureStage_SetTexture(v379, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82c759*/
    NiD3DPass_SetTextureStage(v361, 5u, &v379->Stage); /*0x82c763*/
    v380 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c76d*/
    LOBYTE(v484) = 0x88; /*0x82c77a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v380); /*0x82c77f*/
    v381 = v483; /*0x82c784*/
    LOBYTE(v484) = 1; /*0x82c78a*/
    if ( v483 ) /*0x82c78f*/
    {
      --v483[7].Unk08; /*0x82c791*/
      if ( !v381[7].Unk08 ) /*0x82c79a*/
        sub_772560(v381); /*0x82c79f*/
    }
    v382 = a3; /*0x82c7a4*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82c7af*/
    NiD3DPass_SetTextureStage(v361, 6u, v382); /*0x82c7bc*/
    v383 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c7c6*/
    LOBYTE(v484) = 0x89; /*0x82c7d3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v383); /*0x82c7d8*/
    v384 = v483; /*0x82c7dd*/
    LOBYTE(v484) = 1; /*0x82c7e3*/
    if ( v483 ) /*0x82c7e8*/
    {
      --v483[7].Unk08; /*0x82c7ea*/
      if ( !v384[7].Unk08 ) /*0x82c7f3*/
        sub_772560(v384); /*0x82c7f8*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82c7fd*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82c808*/
    NiD3DPass_SetTextureStage(v361, 7u, &v1->Stage); /*0x82c815*/
  }
  NiD3DPass_SetVertexShader(v361, (NiD3DVertexShader *)unk_B453A4); /*0x82c822*/
  NiD3DPass_SetPixelShader(v361, (NiD3DPixelShader *)unk_B4519C); /*0x82c830*/
  if ( !v361->RenderStateGroup ) /*0x82c835*/
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c840*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v361->RenderStateGroup, 0x1B, 0, 0); /*0x82c84c*/
  if ( !v361->RenderStateGroup ) /*0x82c851*/
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c85c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v361->RenderStateGroup, 0xF, 0, 0); /*0x82c868*/
  if ( !v361->RenderStateGroup ) /*0x82c86d*/
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c878*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v361->RenderStateGroup, 7, 1, 0); /*0x82c884*/
  if ( !v361->RenderStateGroup ) /*0x82c889*/
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c894*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v361->RenderStateGroup, 0x17, 4, 0); /*0x82c8a0*/
  if ( !v361->RenderStateGroup ) /*0x82c8a5*/
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c8b0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v361->RenderStateGroup, 0xE, 1, 0); /*0x82c8bc*/
  if ( !v361->RenderStateGroup ) /*0x82c8c1*/
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82c8cc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v361->RenderStateGroup, 0x34, 0, 0); /*0x82c8d8*/
  unk_B43E54 = 0x79088; /*0x82c8eb*/
  unk_B444E4 = 0x19C; /*0x82c8f1*/
  unk_B437C4 = 0x18000; /*0x82c8f7*/
  unk_B44B74 = 0xC; /*0x82c901*/
  sub_76C890((NiD3DPass **)&v482, &unk_B458D8); /*0x82c90b*/
  v385 = (NiD3DPass *)v482; /*0x82c910*/
  if ( (unsigned int)v482[6] < 8 ) /*0x82c918*/
  {
    v386 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c923*/
    LOBYTE(v484) = 0x8A; /*0x82c930*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v386); /*0x82c935*/
    v387 = v483; /*0x82c93a*/
    LOBYTE(v484) = 1; /*0x82c940*/
    if ( v483 ) /*0x82c945*/
    {
      --v483[7].Unk08; /*0x82c947*/
      if ( !v387[7].Unk08 ) /*0x82c950*/
        sub_772560(v387); /*0x82c955*/
    }
    v388 = a3; /*0x82c95a*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82c965*/
    NiD3DPass_SetTextureStage(v385, 0, v388); /*0x82c972*/
    v389 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c97c*/
    LOBYTE(v484) = 0x8B; /*0x82c989*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v389); /*0x82c98e*/
    v390 = v483; /*0x82c993*/
    LOBYTE(v484) = 1; /*0x82c999*/
    if ( v483 ) /*0x82c99e*/
    {
      --v483[7].Unk08; /*0x82c9a0*/
      if ( !v390[7].Unk08 ) /*0x82c9a9*/
        sub_772560(v390); /*0x82c9ae*/
    }
    v391 = a3; /*0x82c9b3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82c9be*/
    NiD3DPass_SetTextureStage(v385, 1u, v391); /*0x82c9cb*/
    v392 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82c9d5*/
    LOBYTE(v484) = 0x8C; /*0x82c9e2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v392); /*0x82c9e7*/
    v393 = v483; /*0x82c9ec*/
    LOBYTE(v484) = 1; /*0x82c9f2*/
    if ( v483 ) /*0x82c9f7*/
    {
      --v483[7].Unk08; /*0x82c9f9*/
      if ( !v393[7].Unk08 ) /*0x82ca02*/
        sub_772560(v393); /*0x82ca07*/
    }
    v394 = a3; /*0x82ca0c*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82ca17*/
    NiD3DPass_SetTextureStage(v385, 2u, v394); /*0x82ca24*/
    v395 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ca2e*/
    LOBYTE(v484) = 0x8D; /*0x82ca3b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v395); /*0x82ca40*/
    v396 = v483; /*0x82ca45*/
    LOBYTE(v484) = 1; /*0x82ca4b*/
    if ( v483 ) /*0x82ca50*/
    {
      --v483[7].Unk08; /*0x82ca52*/
      if ( !v396[7].Unk08 ) /*0x82ca5b*/
        sub_772560(v396); /*0x82ca60*/
    }
    v397 = a3; /*0x82ca65*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82ca70*/
    NiD3DPass_SetTextureStage(v385, 3u, v397); /*0x82ca7d*/
    v398 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ca87*/
    LOBYTE(v484) = 0x8E; /*0x82ca94*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v398); /*0x82ca99*/
    v399 = v483; /*0x82ca9e*/
    LOBYTE(v484) = 1; /*0x82caa4*/
    if ( v483 ) /*0x82caa9*/
    {
      --v483[7].Unk08; /*0x82caab*/
      if ( !v399[7].Unk08 ) /*0x82cab4*/
        sub_772560(v399); /*0x82cab9*/
    }
    v400 = a3; /*0x82cabe*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82cac9*/
    NiD3DPass_SetTextureStage(v385, 4u, v400); /*0x82cad6*/
    v401 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82cae0*/
    LOBYTE(v484) = 0x8F; /*0x82caed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v401); /*0x82caf2*/
    v402 = v483; /*0x82caf7*/
    LOBYTE(v484) = 1; /*0x82cafd*/
    if ( v483 ) /*0x82cb02*/
    {
      --v483[7].Unk08; /*0x82cb04*/
      if ( !v402[7].Unk08 ) /*0x82cb0d*/
        sub_772560(v402); /*0x82cb12*/
    }
    v403 = (NiD3DTextureStage *)a3; /*0x82cb17*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82cb22*/
    NiD3DTextureStage_SetTexture(v403, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82cb33*/
    NiD3DPass_SetTextureStage(v385, 5u, &v403->Stage); /*0x82cb3d*/
    v404 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82cb47*/
    LOBYTE(v484) = 0x90; /*0x82cb54*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v404); /*0x82cb59*/
    v405 = v483; /*0x82cb5e*/
    LOBYTE(v484) = 1; /*0x82cb64*/
    if ( v483 ) /*0x82cb69*/
    {
      --v483[7].Unk08; /*0x82cb6b*/
      if ( !v405[7].Unk08 ) /*0x82cb74*/
        sub_772560(v405); /*0x82cb79*/
    }
    v406 = a3; /*0x82cb7e*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82cb89*/
    NiD3DPass_SetTextureStage(v385, 6u, v406); /*0x82cb96*/
    v407 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82cba0*/
    LOBYTE(v484) = 0x91; /*0x82cbad*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v407); /*0x82cbb2*/
    v408 = v483; /*0x82cbb7*/
    LOBYTE(v484) = 1; /*0x82cbbd*/
    if ( v483 ) /*0x82cbc2*/
    {
      --v483[7].Unk08; /*0x82cbc4*/
      if ( !v408[7].Unk08 ) /*0x82cbcd*/
        sub_772560(v408); /*0x82cbd2*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82cbd7*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82cbe2*/
    NiD3DPass_SetTextureStage(v385, 7u, &v1->Stage); /*0x82cbef*/
  }
  NiD3DPass_SetVertexShader(v385, (NiD3DVertexShader *)unk_B453A4); /*0x82cbfd*/
  NiD3DPass_SetPixelShader(v385, (NiD3DPixelShader *)unk_B451A0); /*0x82cc0a*/
  if ( !v385->RenderStateGroup ) /*0x82cc0f*/
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82cc1a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v385->RenderStateGroup, 0x1B, 0, 0); /*0x82cc26*/
  if ( !v385->RenderStateGroup ) /*0x82cc2b*/
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82cc36*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v385->RenderStateGroup, 0xF, 0, 0); /*0x82cc42*/
  if ( !v385->RenderStateGroup ) /*0x82cc47*/
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82cc52*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v385->RenderStateGroup, 7, 1, 0); /*0x82cc5e*/
  if ( !v385->RenderStateGroup ) /*0x82cc63*/
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82cc6e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v385->RenderStateGroup, 0x17, 4, 0); /*0x82cc7a*/
  if ( !v385->RenderStateGroup ) /*0x82cc7f*/
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82cc8a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v385->RenderStateGroup, 0xE, 1, 0); /*0x82cc96*/
  if ( !v385->RenderStateGroup ) /*0x82cc9b*/
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82cca6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v385->RenderStateGroup, 0x34, 0, 0); /*0x82ccb2*/
  unk_B43E58 = 0x79088; /*0x82ccc0*/
  unk_B444E8 = 0x19C; /*0x82ccc6*/
  unk_B437C8 = 0x18000; /*0x82cccc*/
  unk_B44B78 = 0xC; /*0x82ccd6*/
  sub_76C890((NiD3DPass **)&v482, &unk_B45B7C); /*0x82cce0*/
  v409 = (NiD3DPass *)v482; /*0x82cce5*/
  if ( (unsigned int)v482[6] < 8 ) /*0x82ccef*/
  {
    v410 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ccfa*/
    LOBYTE(v484) = 0x92; /*0x82cd07*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v410); /*0x82cd0c*/
    v411 = v483; /*0x82cd11*/
    LOBYTE(v484) = 1; /*0x82cd17*/
    if ( v483 ) /*0x82cd1c*/
    {
      --v483[7].Unk08; /*0x82cd1e*/
      if ( !v411[7].Unk08 ) /*0x82cd27*/
        sub_772560(v411); /*0x82cd2c*/
    }
    v412 = a3; /*0x82cd31*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82cd3c*/
    NiD3DPass_SetTextureStage(v409, 0, v412); /*0x82cd49*/
    v413 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82cd53*/
    LOBYTE(v484) = 0x93; /*0x82cd60*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v413); /*0x82cd65*/
    v414 = v483; /*0x82cd6a*/
    LOBYTE(v484) = 1; /*0x82cd70*/
    if ( v483 ) /*0x82cd75*/
    {
      --v483[7].Unk08; /*0x82cd77*/
      if ( !v414[7].Unk08 ) /*0x82cd80*/
        sub_772560(v414); /*0x82cd85*/
    }
    v415 = a3; /*0x82cd8a*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82cd95*/
    NiD3DPass_SetTextureStage(v409, 1u, v415); /*0x82cda2*/
    v416 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82cdac*/
    LOBYTE(v484) = 0x94; /*0x82cdb9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v416); /*0x82cdbe*/
    v417 = v483; /*0x82cdc3*/
    LOBYTE(v484) = 1; /*0x82cdc9*/
    if ( v483 ) /*0x82cdce*/
    {
      --v483[7].Unk08; /*0x82cdd0*/
      if ( !v417[7].Unk08 ) /*0x82cdd9*/
        sub_772560(v417); /*0x82cdde*/
    }
    v418 = a3; /*0x82cde3*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82cdee*/
    NiD3DPass_SetTextureStage(v409, 2u, v418); /*0x82cdfb*/
    v419 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ce05*/
    LOBYTE(v484) = 0x95; /*0x82ce12*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v419); /*0x82ce17*/
    v420 = v483; /*0x82ce1c*/
    LOBYTE(v484) = 1; /*0x82ce22*/
    if ( v483 ) /*0x82ce27*/
    {
      --v483[7].Unk08; /*0x82ce29*/
      if ( !v420[7].Unk08 ) /*0x82ce32*/
        sub_772560(v420); /*0x82ce37*/
    }
    v421 = a3; /*0x82ce3c*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82ce47*/
    NiD3DPass_SetTextureStage(v409, 3u, v421); /*0x82ce54*/
    v422 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ce5e*/
    LOBYTE(v484) = 0x96; /*0x82ce6b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v422); /*0x82ce70*/
    v423 = v483; /*0x82ce75*/
    LOBYTE(v484) = 1; /*0x82ce7b*/
    if ( v483 ) /*0x82ce80*/
    {
      --v483[7].Unk08; /*0x82ce82*/
      if ( !v423[7].Unk08 ) /*0x82ce8b*/
        sub_772560(v423); /*0x82ce90*/
    }
    v424 = a3; /*0x82ce95*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82cea0*/
    NiD3DPass_SetTextureStage(v409, 4u, v424); /*0x82cead*/
    v425 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82ceb7*/
    LOBYTE(v484) = 0x97; /*0x82cec4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v425); /*0x82cec9*/
    v426 = v483; /*0x82cece*/
    LOBYTE(v484) = 1; /*0x82ced4*/
    if ( v483 ) /*0x82ced9*/
    {
      --v483[7].Unk08; /*0x82cedb*/
      if ( !v426[7].Unk08 ) /*0x82cee4*/
        sub_772560(v426); /*0x82cee9*/
    }
    v427 = (NiD3DTextureStage *)a3; /*0x82ceee*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82cef9*/
    NiD3DTextureStage_SetTexture(v427, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82cf0a*/
    NiD3DPass_SetTextureStage(v409, 5u, &v427->Stage); /*0x82cf14*/
    v428 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82cf1e*/
    LOBYTE(v484) = 0x98; /*0x82cf2b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v428); /*0x82cf30*/
    v429 = v483; /*0x82cf35*/
    LOBYTE(v484) = 1; /*0x82cf3b*/
    if ( v483 ) /*0x82cf40*/
    {
      --v483[7].Unk08; /*0x82cf42*/
      if ( !v429[7].Unk08 ) /*0x82cf4b*/
        sub_772560(v429); /*0x82cf50*/
    }
    v430 = a3; /*0x82cf55*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82cf60*/
    NiD3DPass_SetTextureStage(v409, 6u, v430); /*0x82cf6d*/
    v431 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82cf77*/
    LOBYTE(v484) = 0x99; /*0x82cf84*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v431); /*0x82cf89*/
    v432 = v483; /*0x82cf8e*/
    LOBYTE(v484) = 1; /*0x82cf94*/
    if ( v483 ) /*0x82cf99*/
    {
      --v483[7].Unk08; /*0x82cf9b*/
      if ( !v432[7].Unk08 ) /*0x82cfa4*/
        sub_772560(v432); /*0x82cfa9*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82cfae*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82cfb9*/
    NiD3DPass_SetTextureStage(v409, 7u, &v1->Stage); /*0x82cfc6*/
  }
  NiD3DPass_SetVertexShader(v409, (NiD3DVertexShader *)unk_B45488); /*0x82cfd4*/
  NiD3DPass_SetPixelShader(v409, (NiD3DPixelShader *)unk_B45274[0]); /*0x82cfe2*/
  if ( !v409->RenderStateGroup ) /*0x82cfe7*/
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82cff2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v409->RenderStateGroup, 0x1B, 1, 0); /*0x82cffe*/
  if ( !v409->RenderStateGroup ) /*0x82d003*/
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d00e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v409->RenderStateGroup, 0x13, 9, 0); /*0x82d01a*/
  if ( !v409->RenderStateGroup ) /*0x82d01f*/
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d02a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v409->RenderStateGroup, 0x14, 1, 0); /*0x82d036*/
  if ( !v409->RenderStateGroup ) /*0x82d03b*/
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d046*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v409->RenderStateGroup, 0xF, 0, 0); /*0x82d052*/
  if ( !v409->RenderStateGroup ) /*0x82d057*/
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d062*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v409->RenderStateGroup, 7, 1, 0); /*0x82d06e*/
  if ( !v409->RenderStateGroup ) /*0x82d073*/
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d07e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v409->RenderStateGroup, 0x17, 4, 0); /*0x82d08a*/
  if ( !v409->RenderStateGroup ) /*0x82d08f*/
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d09a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v409->RenderStateGroup, 0xE, 0, 0); /*0x82d0a6*/
  if ( !v409->RenderStateGroup ) /*0x82d0ab*/
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d0b6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v409->RenderStateGroup, 0x34, 0, 0); /*0x82d0c2*/
  if ( !v409->RenderStateGroup ) /*0x82d0c7*/
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d0d2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v409->RenderStateGroup, 0x98, 0x3F, 1); /*0x82d0e1*/
  unk_B440FC = 0x8806; /*0x82d0f9*/
  unk_B4478C = 8; /*0x82d0ff*/
  unk_B43A6C = 0x8000; /*0x82d109*/
  sub_76C890((NiD3DPass **)&v482, &unk_B45B80); /*0x82d10f*/
  v433 = (NiD3DPass *)v482; /*0x82d114*/
  if ( (unsigned int)v482[6] < 8 ) /*0x82d11c*/
  {
    v434 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d127*/
    LOBYTE(v484) = 0x9A; /*0x82d134*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v434); /*0x82d139*/
    v435 = v483; /*0x82d13e*/
    LOBYTE(v484) = 1; /*0x82d144*/
    if ( v483 ) /*0x82d149*/
    {
      --v483[7].Unk08; /*0x82d14b*/
      if ( !v435[7].Unk08 ) /*0x82d154*/
        sub_772560(v435); /*0x82d159*/
    }
    v436 = a3; /*0x82d15e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82d169*/
    NiD3DPass_SetTextureStage(v433, 0, v436); /*0x82d176*/
    v437 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d180*/
    LOBYTE(v484) = 0x9B; /*0x82d18d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v437); /*0x82d192*/
    v438 = v483; /*0x82d197*/
    LOBYTE(v484) = 1; /*0x82d19d*/
    if ( v483 ) /*0x82d1a2*/
    {
      --v483[7].Unk08; /*0x82d1a4*/
      if ( !v438[7].Unk08 ) /*0x82d1ad*/
        sub_772560(v438); /*0x82d1b2*/
    }
    v439 = a3; /*0x82d1b7*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82d1c2*/
    NiD3DPass_SetTextureStage(v433, 1u, v439); /*0x82d1cf*/
    v440 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d1d9*/
    LOBYTE(v484) = 0x9C; /*0x82d1e6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v440); /*0x82d1eb*/
    v441 = v483; /*0x82d1f0*/
    LOBYTE(v484) = 1; /*0x82d1f6*/
    if ( v483 ) /*0x82d1fb*/
    {
      --v483[7].Unk08; /*0x82d1fd*/
      if ( !v441[7].Unk08 ) /*0x82d206*/
        sub_772560(v441); /*0x82d20b*/
    }
    v442 = a3; /*0x82d210*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82d21b*/
    NiD3DPass_SetTextureStage(v433, 2u, v442); /*0x82d228*/
    v443 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d232*/
    LOBYTE(v484) = 0x9D; /*0x82d23f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v443); /*0x82d244*/
    v444 = v483; /*0x82d249*/
    LOBYTE(v484) = 1; /*0x82d24f*/
    if ( v483 ) /*0x82d254*/
    {
      --v483[7].Unk08; /*0x82d256*/
      if ( !v444[7].Unk08 ) /*0x82d25f*/
        sub_772560(v444); /*0x82d264*/
    }
    v445 = a3; /*0x82d269*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82d274*/
    NiD3DPass_SetTextureStage(v433, 3u, v445); /*0x82d281*/
    v446 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d28b*/
    LOBYTE(v484) = 0x9E; /*0x82d298*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v446); /*0x82d29d*/
    v447 = v483; /*0x82d2a2*/
    LOBYTE(v484) = 1; /*0x82d2a8*/
    if ( v483 ) /*0x82d2ad*/
    {
      --v483[7].Unk08; /*0x82d2af*/
      if ( !v447[7].Unk08 ) /*0x82d2b8*/
        sub_772560(v447); /*0x82d2bd*/
    }
    v448 = a3; /*0x82d2c2*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82d2cd*/
    NiD3DPass_SetTextureStage(v433, 4u, v448); /*0x82d2da*/
    v449 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d2e4*/
    LOBYTE(v484) = 0x9F; /*0x82d2f1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v449); /*0x82d2f6*/
    v450 = v483; /*0x82d2fb*/
    LOBYTE(v484) = 1; /*0x82d301*/
    if ( v483 ) /*0x82d306*/
    {
      --v483[7].Unk08; /*0x82d308*/
      if ( !v450[7].Unk08 ) /*0x82d311*/
        sub_772560(v450); /*0x82d316*/
    }
    v451 = (NiD3DTextureStage *)a3; /*0x82d31b*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82d326*/
    NiD3DTextureStage_SetTexture(v451, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82d336*/
    NiD3DPass_SetTextureStage(v433, 5u, &v451->Stage); /*0x82d340*/
    v452 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d34a*/
    LOBYTE(v484) = 0xA0; /*0x82d357*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v452); /*0x82d35c*/
    v453 = v483; /*0x82d361*/
    LOBYTE(v484) = 1; /*0x82d367*/
    if ( v483 ) /*0x82d36c*/
    {
      --v483[7].Unk08; /*0x82d36e*/
      if ( !v453[7].Unk08 ) /*0x82d377*/
        sub_772560(v453); /*0x82d37c*/
    }
    v454 = a3; /*0x82d381*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82d38c*/
    NiD3DPass_SetTextureStage(v433, 6u, v454); /*0x82d399*/
    v455 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d3a3*/
    LOBYTE(v484) = 0xA1; /*0x82d3b0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v455); /*0x82d3b5*/
    v456 = v483; /*0x82d3ba*/
    LOBYTE(v484) = 1; /*0x82d3c0*/
    if ( v483 ) /*0x82d3c5*/
    {
      --v483[7].Unk08; /*0x82d3c7*/
      if ( !v456[7].Unk08 ) /*0x82d3d0*/
        sub_772560(v456); /*0x82d3d5*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82d3da*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82d3e5*/
    NiD3DPass_SetTextureStage(v433, 7u, &v1->Stage); /*0x82d3f2*/
  }
  NiD3DPass_SetVertexShader(v433, (NiD3DVertexShader *)unk_B4548C); /*0x82d3ff*/
  NiD3DPass_SetPixelShader(v433, (NiD3DPixelShader *)unk_B45274[0]); /*0x82d40d*/
  if ( !v433->RenderStateGroup ) /*0x82d412*/
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d41d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v433->RenderStateGroup, 0x1B, 1, 0); /*0x82d429*/
  if ( !v433->RenderStateGroup ) /*0x82d42e*/
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d439*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v433->RenderStateGroup, 0x13, 9, 0); /*0x82d445*/
  if ( !v433->RenderStateGroup ) /*0x82d44a*/
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d455*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v433->RenderStateGroup, 0x14, 1, 0); /*0x82d461*/
  if ( !v433->RenderStateGroup ) /*0x82d466*/
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d471*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v433->RenderStateGroup, 0xF, 0, 0); /*0x82d47d*/
  if ( !v433->RenderStateGroup ) /*0x82d482*/
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d48d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v433->RenderStateGroup, 7, 1, 0); /*0x82d499*/
  if ( !v433->RenderStateGroup ) /*0x82d49e*/
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d4a9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v433->RenderStateGroup, 0x17, 4, 0); /*0x82d4b5*/
  if ( !v433->RenderStateGroup ) /*0x82d4ba*/
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d4c5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v433->RenderStateGroup, 0xE, 0, 0); /*0x82d4d1*/
  if ( !v433->RenderStateGroup ) /*0x82d4d6*/
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d4e1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v433->RenderStateGroup, 0x34, 0, 0); /*0x82d4ed*/
  if ( !v433->RenderStateGroup ) /*0x82d4f2*/
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d4fd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v433->RenderStateGroup, 0x98, 0x3F, 1); /*0x82d50c*/
  unk_B44100 = 0x4880C; /*0x82d51a*/
  unk_B44790 = 8; /*0x82d524*/
  unk_B43A70 = 0x8000; /*0x82d52e*/
  sub_76C890((NiD3DPass **)&v482, &unk_B45B84); /*0x82d534*/
  v457 = (NiD3DPass *)v482; /*0x82d539*/
  if ( (unsigned int)v482[6] < 8 ) /*0x82d541*/
  {
    v458 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d54c*/
    LOBYTE(v484) = 0xA2; /*0x82d559*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v458); /*0x82d55e*/
    v459 = v483; /*0x82d563*/
    LOBYTE(v484) = 1; /*0x82d569*/
    if ( v483 ) /*0x82d56e*/
    {
      --v483[7].Unk08; /*0x82d570*/
      if ( !v459[7].Unk08 ) /*0x82d579*/
        sub_772560(v459); /*0x82d57e*/
    }
    v460 = a3; /*0x82d583*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x82d58e*/
    NiD3DPass_SetTextureStage(v457, 0, v460); /*0x82d59b*/
    v461 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d5a5*/
    LOBYTE(v484) = 0xA3; /*0x82d5b2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v461); /*0x82d5b7*/
    v462 = v483; /*0x82d5bc*/
    LOBYTE(v484) = 1; /*0x82d5c2*/
    if ( v483 ) /*0x82d5c7*/
    {
      --v483[7].Unk08; /*0x82d5c9*/
      if ( !v462[7].Unk08 ) /*0x82d5d2*/
        sub_772560(v462); /*0x82d5d7*/
    }
    v463 = a3; /*0x82d5dc*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x82d5e7*/
    NiD3DPass_SetTextureStage(v457, 1u, v463); /*0x82d5f4*/
    v464 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d5fe*/
    LOBYTE(v484) = 0xA4; /*0x82d60b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v464); /*0x82d610*/
    v465 = v483; /*0x82d615*/
    LOBYTE(v484) = 1; /*0x82d61b*/
    if ( v483 ) /*0x82d620*/
    {
      --v483[7].Unk08; /*0x82d622*/
      if ( !v465[7].Unk08 ) /*0x82d62b*/
        sub_772560(v465); /*0x82d630*/
    }
    v466 = a3; /*0x82d635*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x82d640*/
    NiD3DPass_SetTextureStage(v457, 2u, v466); /*0x82d64d*/
    v467 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d657*/
    LOBYTE(v484) = 0xA5; /*0x82d664*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v467); /*0x82d669*/
    v468 = v483; /*0x82d66e*/
    LOBYTE(v484) = 1; /*0x82d674*/
    if ( v483 ) /*0x82d679*/
    {
      --v483[7].Unk08; /*0x82d67b*/
      if ( !v468[7].Unk08 ) /*0x82d684*/
        sub_772560(v468); /*0x82d689*/
    }
    v469 = a3; /*0x82d68e*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x82d699*/
    NiD3DPass_SetTextureStage(v457, 3u, v469); /*0x82d6a6*/
    v470 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d6b0*/
    LOBYTE(v484) = 0xA6; /*0x82d6bd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v470); /*0x82d6c2*/
    v471 = v483; /*0x82d6c7*/
    LOBYTE(v484) = 1; /*0x82d6cd*/
    if ( v483 ) /*0x82d6d2*/
    {
      --v483[7].Unk08; /*0x82d6d4*/
      if ( !v471[7].Unk08 ) /*0x82d6dd*/
        sub_772560(v471); /*0x82d6e2*/
    }
    v472 = a3; /*0x82d6e7*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x82d6f2*/
    NiD3DPass_SetTextureStage(v457, 4u, v472); /*0x82d6ff*/
    v473 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d709*/
    LOBYTE(v484) = 0xA7; /*0x82d716*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v473); /*0x82d71b*/
    v474 = v483; /*0x82d720*/
    LOBYTE(v484) = 1; /*0x82d726*/
    if ( v483 ) /*0x82d72b*/
    {
      --v483[7].Unk08; /*0x82d72d*/
      if ( !v474[7].Unk08 ) /*0x82d736*/
        sub_772560(v474); /*0x82d73b*/
    }
    v475 = (NiD3DTextureStage *)a3; /*0x82d740*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x82d74b*/
    NiD3DTextureStage_SetTexture(v475, (NiRenderedTexture *)LODWORD(flt_B43110[0])); /*0x82d75c*/
    NiD3DPass_SetTextureStage(v457, 5u, &v475->Stage); /*0x82d766*/
    v476 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d770*/
    LOBYTE(v484) = 0xA8; /*0x82d77d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v476); /*0x82d782*/
    v477 = v483; /*0x82d787*/
    LOBYTE(v484) = 1; /*0x82d78d*/
    if ( v483 ) /*0x82d792*/
    {
      --v483[7].Unk08; /*0x82d794*/
      if ( !v477[7].Unk08 ) /*0x82d79d*/
        sub_772560(v477); /*0x82d7a2*/
    }
    v478 = a3; /*0x82d7a7*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x82d7b2*/
    NiD3DPass_SetTextureStage(v457, 6u, v478); /*0x82d7bf*/
    v479 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v483); /*0x82d7c9*/
    LOBYTE(v484) = 0xA9; /*0x82d7d6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v479); /*0x82d7db*/
    v480 = v483; /*0x82d7e0*/
    LOBYTE(v484) = 1; /*0x82d7e6*/
    if ( v483 ) /*0x82d7eb*/
    {
      --v483[7].Unk08; /*0x82d7ed*/
      if ( !v480[7].Unk08 ) /*0x82d7f6*/
        sub_772560(v480); /*0x82d7fb*/
    }
    v1 = (NiD3DTextureStage *)a3; /*0x82d800*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x82d80b*/
    NiD3DPass_SetTextureStage(v457, 7u, &v1->Stage); /*0x82d818*/
  }
  NiD3DPass_SetVertexShader(v457, (NiD3DVertexShader *)unk_B45490); /*0x82d826*/
  NiD3DPass_SetPixelShader(v457, (NiD3DPixelShader *)unk_B45274[0]); /*0x82d833*/
  if ( !v457->RenderStateGroup ) /*0x82d838*/
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d843*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v457->RenderStateGroup, 0x1B, 1, 0); /*0x82d84f*/
  if ( !v457->RenderStateGroup ) /*0x82d854*/
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d85f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v457->RenderStateGroup, 0x13, 9, 0); /*0x82d86b*/
  if ( !v457->RenderStateGroup ) /*0x82d870*/
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d87b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v457->RenderStateGroup, 0x14, 1, 0); /*0x82d887*/
  if ( !v457->RenderStateGroup ) /*0x82d88c*/
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d897*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v457->RenderStateGroup, 0xF, 0, 0); /*0x82d8a3*/
  if ( !v457->RenderStateGroup ) /*0x82d8a8*/
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d8b3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v457->RenderStateGroup, 7, 1, 0); /*0x82d8bf*/
  if ( !v457->RenderStateGroup ) /*0x82d8c4*/
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d8cf*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v457->RenderStateGroup, 0x17, 4, 0); /*0x82d8db*/
  if ( !v457->RenderStateGroup ) /*0x82d8e0*/
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d8eb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v457->RenderStateGroup, 0xE, 0, 0); /*0x82d8f7*/
  if ( !v457->RenderStateGroup ) /*0x82d8fc*/
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d907*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v457->RenderStateGroup, 0x34, 0, 0); /*0x82d913*/
  if ( !v457->RenderStateGroup ) /*0x82d918*/
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x82d923*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v457->RenderStateGroup, 0x98, 0x3F, 1); /*0x82d932*/
  unk_B44104 = 0x8806; /*0x82d937*/
  unk_B44794 = 8; /*0x82d942*/
  unk_B43A74 = 0x8000; /*0x82d94c*/
  LOBYTE(v484) = 0; /*0x82d952*/
  if ( v1 ) /*0x82d957*/
  {
    v3 = v1[7].Unk08-- == 1; /*0x82d959*/
    if ( v3 ) /*0x82d95c*/
      sub_772560(v1); /*0x82d960*/
  }
  v3 = v457->RefCount-- == 1; /*0x82d965*/
  v484 = 0xFFFFFFFF; /*0x82d968*/
  if ( v3 ) /*0x82d96c*/
    NiD3DPass_ReleaseToPool(v457); /*0x82d970*/
}
