<div style="width:23%;margin:0 1%;height:auto;overflow:hidden;display:block;float:left;">
					<a href="[field:arcurl/]" ><img  style="width:100%;height:250px" SRC="[field:picname/]"/></a>
					<p style="overflow:hidden;line-height:25px;margin:5px auto;width:98%;height:30px;color:#333;font-size:16px;text-align:center;">
						<b>[field:typelink/]</b>
					</p>
					<p style="overflow:hidden;line-height:25px;margin:5px auto;width:98%;height:55px;color:#333;font-size:16px;text-align:left;">
						<a href="[field:arcurl/]" style="color:#333;"><b>[field:title/]</b></a>
					</p>
					<p style="overflow:hidden;line-height:25px;margin:5px auto;width:98%;height:30px;color:#333;font-size:16px;text-align:center;">
						<b><span style="color:#FF0000;float:left">优惠价：&yen;[field:price/]元/[field:units/]</span></b>
					</p>
					<p style="overflow:hidden;line-height:25px;margin:5px auto;width:98%;height:30px;color:#333;font-size:16px;text-align:center;">
					[field:id runphp='yes']
$aid = @me;
$row = $GLOBALS['dsql']->GetOne("SELECT `trueprice` FROM  `#@__addonshop` where aid='$aid' ");
@me = "{$row['trueprice']}尽快解决";
[/field:id]
						<!--<b><span style="float:left;color:#FF0000">市场价：&yen;[field:price/]元/[field:units/]</span></b>-->
					</p>
					<p style="overflow:hidden;margin:5px auto;width:98%;height:80px;color:#333;font-size:16px;text-align:center;">
						<a href="[field:arcurl/]"><img style="width:90%;height:40px;margin-top:10px;" src="/templets/my/images/chars.jpg"/></a>
					</p>
				</div>