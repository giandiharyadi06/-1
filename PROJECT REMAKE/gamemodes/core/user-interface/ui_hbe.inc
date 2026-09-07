new Text:HBE[20],
    PlayerText:PHBE[MAX_PLAYERS][10],
    Text:StressTD;

CreateHBETextdraw()
{
	//V1
	HBE[0] = TextDrawCreate(129.000, 432.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[0], -14.000, -1.000);
	TextDrawAlignment(HBE[0], 1);
	TextDrawColor(HBE[0], -377187329);
	TextDrawSetShadow(HBE[0], 0);
	TextDrawSetOutline(HBE[0], 0);
	TextDrawBackgroundColor(HBE[0], 255);
	TextDrawFont(HBE[0], 4);
	TextDrawSetProportional(HBE[0], 1);

	HBE[1] = TextDrawCreate(129.000, 446.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[1], -14.000, -1.000);
	TextDrawAlignment(HBE[1], 1);
	TextDrawColor(HBE[1], -377187329);
	TextDrawSetShadow(HBE[1], 0);
	TextDrawSetOutline(HBE[1], 0);
	TextDrawBackgroundColor(HBE[1], 255);
	TextDrawFont(HBE[1], 4);
	TextDrawSetProportional(HBE[1], 1);

	HBE[2] = TextDrawCreate(128.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[2], 1.000, -14.000);
	TextDrawAlignment(HBE[2], 1);
	TextDrawColor(HBE[2], -377187329);
	TextDrawSetShadow(HBE[2], 0);
	TextDrawSetOutline(HBE[2], 0);
	TextDrawBackgroundColor(HBE[2], 255);
	TextDrawFont(HBE[2], 4);
	TextDrawSetProportional(HBE[2], 1);

	HBE[3] = TextDrawCreate(115.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[3], 1.000, -14.000);
	TextDrawAlignment(HBE[3], 1);
	TextDrawColor(HBE[3], -377187329);
	TextDrawSetShadow(HBE[3], 0);
	TextDrawSetOutline(HBE[3], 0);
	TextDrawBackgroundColor(HBE[3], 255);
	TextDrawFont(HBE[3], 4);
	TextDrawSetProportional(HBE[3], 1);

	HBE[4] = TextDrawCreate(113.000, 432.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[4], -14.000, -1.000);
	TextDrawAlignment(HBE[4], 1);
	TextDrawColor(HBE[4], -377187329);
	TextDrawSetShadow(HBE[4], 0);
	TextDrawSetOutline(HBE[4], 0);
	TextDrawBackgroundColor(HBE[4], 255);
	TextDrawFont(HBE[4], 4);
	TextDrawSetProportional(HBE[4], 1);

	HBE[5] = TextDrawCreate(113.000, 446.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[5], -14.000, -1.000);
	TextDrawAlignment(HBE[5], 1);
	TextDrawColor(HBE[5], -377187329);
	TextDrawSetShadow(HBE[5], 0);
	TextDrawSetOutline(HBE[5], 0);
	TextDrawBackgroundColor(HBE[5], 255);
	TextDrawFont(HBE[5], 4);
	TextDrawSetProportional(HBE[5], 1);

	HBE[6] = TextDrawCreate(112.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[6], 1.000, -14.000);
	TextDrawAlignment(HBE[6], 1);
	TextDrawColor(HBE[6], -377187329);
	TextDrawSetShadow(HBE[6], 0);
	TextDrawSetOutline(HBE[6], 0);
	TextDrawBackgroundColor(HBE[6], 255);
	TextDrawFont(HBE[6], 4);
	TextDrawSetProportional(HBE[6], 1);

	HBE[7] = TextDrawCreate(99.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[7], 1.000, -14.000);
	TextDrawAlignment(HBE[7], 1);
	TextDrawColor(HBE[7], -377187329);
	TextDrawSetShadow(HBE[7], 0);
	TextDrawSetOutline(HBE[7], 0);
	TextDrawBackgroundColor(HBE[7], 255);
	TextDrawFont(HBE[7], 4);
	TextDrawSetProportional(HBE[7], 1);

	HBE[8] = TextDrawCreate(97.000, 432.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[8], -14.000, -1.000);
	TextDrawAlignment(HBE[8], 1);
	TextDrawColor(HBE[8], -377187329);
	TextDrawSetShadow(HBE[8], 0);
	TextDrawSetOutline(HBE[8], 0);
	TextDrawBackgroundColor(HBE[8], 255);
	TextDrawFont(HBE[8], 4);
	TextDrawSetProportional(HBE[8], 1);

	HBE[9] = TextDrawCreate(97.000, 446.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[9], -14.000, -1.000);
	TextDrawAlignment(HBE[9], 1);
	TextDrawColor(HBE[9], -377187329);
	TextDrawSetShadow(HBE[9], 0);
	TextDrawSetOutline(HBE[9], 0);
	TextDrawBackgroundColor(HBE[9], 255);
	TextDrawFont(HBE[9], 4);
	TextDrawSetProportional(HBE[9], 1);

	HBE[10] = TextDrawCreate(96.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[10], 1.000, -14.000);
	TextDrawAlignment(HBE[10], 1);
	TextDrawColor(HBE[10], -377187329);
	TextDrawSetShadow(HBE[10], 0);
	TextDrawSetOutline(HBE[10], 0);
	TextDrawBackgroundColor(HBE[10], 255);
	TextDrawFont(HBE[10], 4);
	TextDrawSetProportional(HBE[10], 1);

	HBE[11] = TextDrawCreate(83.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[11], 1.000, -14.000);
	TextDrawAlignment(HBE[11], 1);
	TextDrawColor(HBE[11], -377187329);
	TextDrawSetShadow(HBE[11], 0);
	TextDrawSetOutline(HBE[11], 0);
	TextDrawBackgroundColor(HBE[11], 255);
	TextDrawFont(HBE[11], 4);
	TextDrawSetProportional(HBE[11], 1);

	HBE[12] = TextDrawCreate(81.000, 431.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[12], -34.000, 1.000);
	TextDrawAlignment(HBE[12], 1);
	TextDrawColor(HBE[12], -377187329);
	TextDrawSetShadow(HBE[12], 0);
	TextDrawSetOutline(HBE[12], 0);
	TextDrawBackgroundColor(HBE[12], 255);
	TextDrawFont(HBE[12], 4);
	TextDrawSetProportional(HBE[12], 1);

	HBE[13] = TextDrawCreate(81.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[13], -34.000, 1.000);
	TextDrawAlignment(HBE[13], 1);
	TextDrawColor(HBE[13], -377187329);
	TextDrawSetShadow(HBE[13], 0);
	TextDrawSetOutline(HBE[13], 0);
	TextDrawBackgroundColor(HBE[13], 255);
	TextDrawFont(HBE[13], 4);
	TextDrawSetProportional(HBE[13], 1);

	HBE[14] = TextDrawCreate(80.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[14], 1.000, -14.000);
	TextDrawAlignment(HBE[14], 1);
	TextDrawColor(HBE[14], -377187329);
	TextDrawSetShadow(HBE[14], 0);
	TextDrawSetOutline(HBE[14], 0);
	TextDrawBackgroundColor(HBE[14], 255);
	TextDrawFont(HBE[14], 4);
	TextDrawSetProportional(HBE[14], 1);

	HBE[15] = TextDrawCreate(47.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[15], 1.000, -14.000);
	TextDrawAlignment(HBE[15], 1);
	TextDrawColor(HBE[15], -377187329);
	TextDrawSetShadow(HBE[15], 0);
	TextDrawSetOutline(HBE[15], 0);
	TextDrawBackgroundColor(HBE[15], 255);
	TextDrawFont(HBE[15], 4);
	TextDrawSetProportional(HBE[15], 1);

	HBE[16] = TextDrawCreate(45.000, 431.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[16], -34.000, 1.000);
	TextDrawAlignment(HBE[16], 1);
	TextDrawColor(HBE[16], -377187329);
	TextDrawSetShadow(HBE[16], 0);
	TextDrawSetOutline(HBE[16], 0);
	TextDrawBackgroundColor(HBE[16], 255);
	TextDrawFont(HBE[16], 4);
	TextDrawSetProportional(HBE[16], 1);

	HBE[17] = TextDrawCreate(45.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[17], -34.000, 1.000);
	TextDrawAlignment(HBE[17], 1);
	TextDrawColor(HBE[17], -377187329);
	TextDrawSetShadow(HBE[17], 0);
	TextDrawSetOutline(HBE[17], 0);
	TextDrawBackgroundColor(HBE[17], 255);
	TextDrawFont(HBE[17], 4);
	TextDrawSetProportional(HBE[17], 1);

	HBE[18] = TextDrawCreate(44.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[18], 1.000, -14.000);
	TextDrawAlignment(HBE[18], 1);
	TextDrawColor(HBE[18], -377187329);
	TextDrawSetShadow(HBE[18], 0);
	TextDrawSetOutline(HBE[18], 0);
	TextDrawBackgroundColor(HBE[18], 255);
	TextDrawFont(HBE[18], 4);
	TextDrawSetProportional(HBE[18], 1);

	HBE[19] = TextDrawCreate(11.000, 445.000, "LD_BUM:blkdot");
	TextDrawTextSize(HBE[19], 1.000, -14.000);
	TextDrawAlignment(HBE[19], 1);
	TextDrawColor(HBE[19], -377187329);
	TextDrawSetShadow(HBE[19], 0);
	TextDrawSetOutline(HBE[19], 0);
	TextDrawBackgroundColor(HBE[19], 255);
	TextDrawFont(HBE[19], 4);
	TextDrawSetProportional(HBE[19], 1);

}

CreateHBEProgressBarTD(playerid)
{
	//v1
	PHBE[playerid][0] = CreatePlayerTextDraw(playerid, 13.000, 444.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][0], 30.000, -11.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][0], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][0], -849584897);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][0], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][0], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][0], 1);

	PHBE[playerid][1] = CreatePlayerTextDraw(playerid, 49.000, 444.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][1], 30.000, -11.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][1], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][1], 548580095);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][1], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][1], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][1], 1);

	PHBE[playerid][2] = CreatePlayerTextDraw(playerid, 85.000, 444.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][2], 10.000, -11.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][2], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][2], -626712321);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][2], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][2], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][2], 1);

	PHBE[playerid][3] = CreatePlayerTextDraw(playerid, 101.000, 444.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][3], 10.000, -11.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][3], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][3], 16423679);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][3], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][3], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][3], 1);

	PHBE[playerid][4] = CreatePlayerTextDraw(playerid, 117.000, 444.000, "LD_BUM:blkdot");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][4], 10.000, -11.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][4], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][4], 1784335871);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][4], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][4], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][4], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][4], 1);

	PHBE[playerid][5] = CreatePlayerTextDraw(playerid, 16.000, 435.000, "HUD:radar_girlfriend");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][5], 5.000, 6.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][5], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][5], -1);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][5], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][5], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][5], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][5], 1);

	PHBE[playerid][6] = CreatePlayerTextDraw(playerid, 51.000, 435.000, "HUD:radar_tshirt");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][6], 5.000, 6.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][6], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][6], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][6], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][6], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][6], 1);

	PHBE[playerid][7] = CreatePlayerTextDraw(playerid, 87.000, 435.000, "HUD:radar_burgerShot");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][7], 6.000, 6.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][7], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][7], -1);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][7], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][7], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][7], 1);

	PHBE[playerid][8] = CreatePlayerTextDraw(playerid, 103.000, 435.000, "HUD:radar_diner");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][8], 6.000, 6.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][8], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][8], -1);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][8], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][8], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][8], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][8], 1);

	PHBE[playerid][9] = CreatePlayerTextDraw(playerid, 119.000, 435.000, "HUD:radar_waypoint");
	PlayerTextDrawTextSize(playerid, PHBE[playerid][9], 6.000, 6.000);
	PlayerTextDrawAlignment(playerid, PHBE[playerid][9], 1);
	PlayerTextDrawColor(playerid, PHBE[playerid][9], -1724723969);
	PlayerTextDrawSetShadow(playerid, PHBE[playerid][9], 0);
	PlayerTextDrawSetOutline(playerid, PHBE[playerid][9], 0);
	PlayerTextDrawBackgroundColor(playerid, PHBE[playerid][9], 255);
	PlayerTextDrawFont(playerid, PHBE[playerid][9], 4);
	PlayerTextDrawSetProportional(playerid, PHBE[playerid][9], 1);

}

CreateStressTD()
{
    StressTD = TextDrawCreate(322.000000, -1.000000, "_");
    TextDrawFont(StressTD, true);
    TextDrawLetterSize(StressTD, 0.600000, 56.800003);
    TextDrawTextSize(StressTD, 298.500000, 675.000000);
    TextDrawSetOutline(StressTD, true);
    TextDrawSetShadow(StressTD, false);
    TextDrawAlignment(StressTD, 2);
    TextDrawColor(StressTD, -1);
    TextDrawBackgroundColor(StressTD,  155);
    TextDrawBoxColor(StressTD, 35634);
    TextDrawUseBox(StressTD, true);
    TextDrawSetProportional(StressTD, true);
    TextDrawSetSelectable(StressTD, false);
}

//V1
ShowHBETD(playerid)
{
    for(new x; x < 20; x++)
	{
        TextDrawShowForPlayer(playerid, HBE[x]);
    }
    for(new x; x < 10; x++)
    {
        PlayerTextDrawShow(playerid, PHBE[playerid][x]);
    }
	//ShowStatsTD(playerid);
	ShowRadioVoiceInfoTD(playerid);
	HBETDHidden[playerid] = false;
}

HideHBETD(playerid)
{
    for(new x; x < 20; x++)
	{
        TextDrawHideForPlayer(playerid, HBE[x]);
    }
    for(new x; x < 10; x++)
    {
        PlayerTextDrawHide(playerid, PHBE[playerid][x]);
    }
	//HideStatsTD(playerid);
	HideRadioVoiceInfoTD(playerid);
	HBETDHidden[playerid] = true;
}

ShowStressEffectTD(playerid)
{
    TextDrawShowForPlayer(playerid, StressTD);
}

HideStressEffectTD(playerid)
{
    TextDrawHideForPlayer(playerid, StressTD);
}