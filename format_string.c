printf("What would you like to do?\n");
printf("1) Buy some things!\n");
printf("2) View my portfolio\n");
scanf("%d", &resp);
if (resp == 1) {
  buy_things(p);
} else if (resp == 2) {
  view_portfolio(p);
}
